  int led = 2;
  int ldr=0;
  
void setup() {

pinMode(led,OUTPUT);
pinMode(ldr,INPUT);
Serial.begin(9600);
}

void loop() {
int ldrvalue= analogRead(ldr);  
Serial.println(ldrvalue);
if(ldrvalue<200){
  
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW); 
}
delay(100);
}
