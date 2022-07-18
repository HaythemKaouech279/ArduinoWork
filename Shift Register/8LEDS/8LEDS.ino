int val=2;
int rclck=3;
int srclck=4;
int button=5;
int buzzer=6;
int wait;
int test=0;
void turnOn(int nombre);
void block();
void setup() {
 pinMode(val,OUTPUT); 
 pinMode(rclck,OUTPUT); 
 pinMode(srclck,OUTPUT); 
 pinMode(buzzer,OUTPUT); 
 pinMode(button,INPUT); 
 Serial.begin(9600);
}

void loop() {

 for(int i=0;i<8;i++){
  Serial.print(wait);
  wait=analogRead(0);
  Serial.println(wait);
  turnOn(i);
  delay(wait);

  
 }

}
void block(){
  digitalWrite(buzzer,HIGH);
  while(test){
    test=digitalRead(button);
 
  }
  digitalWrite(buzzer,LOW);
}
void turnOn(int nombre){
  digitalWrite(srclck,LOW);
  digitalWrite(val,LOW);
  if (nombre==0){
    
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
  }
  else if (nombre==1){
    
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
  }
    else if (nombre==2){
    
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
  }
      else if (nombre==3){
    
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
  }
        else if (nombre==4){
    
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
  }
          else if (nombre==5){
    
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
     
  digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
  }
            else if (nombre==6){
    
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
  digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
  }
              else if (nombre==7){
    
     digitalWrite(rclck,LOW);
      digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
  digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
  }
   digitalWrite(srclck,HIGH);

}
