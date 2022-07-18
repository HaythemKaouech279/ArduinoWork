int val=2;
int rclck=3;
int srclck=4;
void setup() {
 pinMode(val,OUTPUT); 
 pinMode(rclck,OUTPUT); 
 pinMode(srclck,OUTPUT); 

}

void loop() {
  // affichage
  

}
void enter(int nombre){
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

}
void lighten(int row,int column){
  
}

