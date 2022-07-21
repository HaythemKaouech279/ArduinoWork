

#include <SPI.h>
#include "epd7in5_V2.h"
#include "imagedata.h"

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    Epd epd;
    Serial.print("e-Paper init \r\n ");
    if (epd.Init() != 0) {
        Serial.print("e-Paper init failed\r\n ");
        return;
    }
    Serial.print("e-Paper Clear\r\n ");
    epd.Clear();
    
    epd.Displaypart(IMAGE_DATA,250, 200,240,103);
}

void loop() {
  // put your main code here, to run repeatedly:

}
