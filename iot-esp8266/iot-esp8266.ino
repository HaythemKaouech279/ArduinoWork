#include <SoftwareSerial.h>
#define RX 2
#define TX 3
// Information sur le capteur température
#include <Adafruit_AHTX0.h>
Adafruit_AHTX0 aht;

String AP = "Airbox";       // AP NAME
String PASS = "86eee491eef4"; // AP PASSWORD
String API = "4pwZt6vJ";   // Write API KEY (GQ9WS5CNM1WDMY1J)
String HOST = "api.thingspeak.com"; //api.thingspeak.com
String PORT = "80";
int countTrueCommand;
int countTimeCommand; 
boolean found = false; 
int valSensor = 1;
  
SoftwareSerial esp8266(RX,TX); 
  
void setup() {
  Serial.begin(9600);
  esp8266.begin(115200);
  aht.begin();
  sendCommand("AT",5,"OK");
  sendCommand("AT+CWMODE=1",5,"OK");
  sendCommand("AT+CWJAP=\""+ AP +"\",\""+ PASS +"\"",20,"OK");
}

void loop() {


  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);
  aht.getEvent(&humidity, &temp);// populate temp and humidity objects with fresh data
  Serial.print("Temperature: ");
  Serial.print(temp.temperature);
  Serial.println("*C");
  Serial.print("Humidity: ");
  Serial.print(humidity.relative_humidity);
  Serial.println("%rH");

  //delay(500);
    
  
 String getData = "GET /update?api_key="+ API +"&field1="+temp.temperature +"&field2="+humidity.relative_humidity ;
 sendCommand("AT+CIPMUX=1",5,"OK");
 sendCommand("AT+CIPSTART=0,\"TCP\",\""+ HOST +"\","+ PORT,15,"OK");
 sendCommand("AT+CIPSEND=0," +String(getData.length()+4),4,">");
 esp8266.println(getData);delay(1500);countTrueCommand++;
 sendCommand("AT+CIPCLOSE=0",5,"OK");
}




void sendCommand(String command, int maxTime, char readReplay[]) {
  Serial.print(countTrueCommand);
  Serial.print(". at command => ");
  Serial.print(command);
  Serial.print(" ");
  while(countTimeCommand < (maxTime*1))
  {
    esp8266.println(command);//at+cipsend
    if(esp8266.find(readReplay))//ok
    {
      found = true;
      break;
    }
  
    countTimeCommand++;
  }
  
  if(found == true)
  {
    Serial.println("OYI");
    countTrueCommand++;
    countTimeCommand = 0;
  }
  
  if(found == false)
  {
    Serial.println("Fail");
    countTrueCommand = 0;
    countTimeCommand = 0;
  }
  
  found = false;
 }

  
