

#include <stdlib.h>
#include "epd7in5_V2.h"

Epd::~Epd() {
};

Epd::Epd() {
    reset_pin = RST_PIN;
    dc_pin = DC_PIN;
    cs_pin = CS_PIN;
    busy_pin = BUSY_PIN;
    width = EPD_WIDTH;
    height = EPD_HEIGHT;
};

int Epd::Init(void) {
    if (IfInit() != 0) {
        return -1;
    }
    Reset();

    SendCommand(0x01); 
    SendData(0x07);
    SendData(0x07);
    SendData(0x3f);
    SendData(0x3f);

    SendCommand(0x04);
    DelayMs(100);
    WaitUntilIdle();
    
    SendCommand(0X00);			//PANNEL SETTING
    SendData(0x1F);   //KW-3f   KWR-2F	BWROTP 0f	BWOTP 1f

    SendCommand(0x61);        	//tres
    SendData(0x03);		//source 800
    SendData(0x20);
    SendData(0x01);		//gate 480
    SendData(0xE0);

    SendCommand(0X15);
    SendData(0x00);

    SendCommand(0X50);			//VCOM AND DATA INTERVAL SETTING
    SendData(0x10);
    SendData(0x07);

    SendCommand(0X60);			//TCON SETTING
    SendData(0x22);

    return 0;
}

/**
 *  @brief: basic function for sending commands
 */
void Epd::SendCommand(unsigned char command) {
    DigitalWrite(dc_pin, LOW);
    SpiTransfer(command);
}

/**
 *  @brief: basic function for sending data
 */
void Epd::SendData(unsigned char data) {
    DigitalWrite(dc_pin, HIGH);
    SpiTransfer(data);
}

/**
 *  @brief: Wait until the busy_pin goes HIGH
 */
void Epd::WaitUntilIdle(void) {
    unsigned char busy;
    do{
        SendCommand(0x71);
        busy = DigitalRead(busy_pin);
    }while(busy == 0);
    DelayMs(200);
}

/**
 *  @brief: module reset.
 *          often used to awaken the module in deep sleep,
 *          see Epd::Sleep();
 */
void Epd::Reset(void) {
    DigitalWrite(reset_pin, LOW);                //module reset    
    DelayMs(4);
    DigitalWrite(reset_pin, HIGH);
    DelayMs(200);    
}

void Epd::DisplayFrame(const unsigned char* frame_buffer) {
    
    SendCommand(0x13);
    for (unsigned long j = 0; j < height; j++) {
        for (unsigned long i = 0; i < width; i++) {
            SendData(~frame_buffer[i + j * width]);
        }
    }
    SendCommand(0x12);
    DelayMs(100);
    WaitUntilIdle();
}

void Epd::Displaypart(const unsigned char* pbuffer, unsigned long xStart, unsigned long yStart,unsigned long Picture_Width,unsigned long Picture_Height) {
    SendCommand(0x13);
    int * padd;
    // xStart = xStart/8;
    // xStart = xStart*8;
    for (unsigned long j = 0; j < height; j++) {
        for (unsigned long i = 0; i < width/8; i++) {
            if( (j>=yStart) && (j<yStart+Picture_Height) && (i*8>=xStart) && (i*8<xStart+Picture_Width)){
                SendData(~(pgm_read_byte(&(pbuffer[i-xStart/8 + (Picture_Width)/8*(j-yStart)]))) );
                // SendData(0xff);
            }else {
                SendData(0x00);
            }
        }
    }
    SendCommand(0x12);
    DelayMs(100);
    WaitUntilIdle();

}
/**
 *  @brief: After this command is transmitted, the chip would enter the 
 *          deep-sleep mode to save power. 
 *          The deep sleep mode would return to standby by hardware reset. 
 *          The only one parameter is a check code, the command would be
 *          executed if check code = 0xA5. 
 *          You can use EPD_Reset() to awaken
 */
void Epd::Sleep(void) {
    SendCommand(0X02);
    WaitUntilIdle();
    SendCommand(0X07);
    SendData(0xA5);
}

void Epd::Clear(void) {
    
    SendCommand(0x10);
    for(unsigned long i=0; i<height*width; i++) {
        SendData(0x00);
    }
    SendCommand(0x13);
    for(unsigned long i=0; i<height*width; i++)	{
        SendData(0x00);
    }
    SendCommand(0x12);
    DelayMs(100);
    WaitUntilIdle();
}


/* END OF FILE */
