#include<Servo.h>
Servo servo;
int echo =3 ;
int trig =4;
int angle=0;
int out1=5;
int out2=6;
int out3=8;
int out4=7;
int vitesse1=9;
int vitesse2=10;
long t;
long distance;
void mesure();
void setup() {
  // put your setup code here, to run once:
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(out1,OUTPUT);
  pinMode(out2,OUTPUT);
  pinMode(out3,OUTPUT);
  pinMode(out4,OUTPUT);
  pinMode(vitesse1,OUTPUT);
  pinMode(vitesse2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 /*if (angle >=90)angle =0;
  mesure();
  while(distance<30){
    digitalWrite(buzzer,HIGH);
    delay(50);
    digitalWrite(buzzer,LOW);
    delay(distance*100);
    mesure();
  }
  angle+=10;
  servo.write(angle);
  delay(100);
  mesure();*/
  analogWrite(vitesse1,HIGH);
  analogWrite(vitesse2,HIGH);
  digitalWrite(out1,HIGH);
  digitalWrite(out2,LOW);
  digitalWrite(out3,LOW);
  digitalWrite(out4,HIGH);
  

}
void mesure(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);

  t=pulseIn(echo,HIGH);
  distance=t*0.034/2;

  Serial.print("distance : ");
  Serial.println(distance);
  delay(10);
  
}
