#include <IRremote.h>
int sens1_1=2;
int sens1_2=3;
int sens2_1=4;
int sens2_2=5;
int vit1=6;
int vit2=7;
const uint32_t UP=0xFFA25D;
const uint32_t RIGHT=0xFFB04F;
const uint32_t DOWN=0xFF926D;
const uint32_t LEFT=0xFF629D;
const uint32_t OK=0xFF7887;

int reciever = 9;

IRrecv irrecv(reciever);//inisialiser l reciever
decode_results results;
String message;


void arriere1(){
  digitalWrite(sens1_1,HIGH);
  digitalWrite(sens1_2,LOW);
}

void avant1(){
  digitalWrite(sens1_1,LOW);
  digitalWrite(sens1_2,HIGH);
}
void stop1(){
  digitalWrite(sens1_1,LOW);
digitalWrite(sens1_2,LOW);
}

void arriere2(){
  digitalWrite(sens2_1,HIGH);
  digitalWrite(sens2_2,LOW);
}

void avant2(){
  digitalWrite(sens2_1,LOW);
  digitalWrite(sens2_2,HIGH);
}
void stop2(){
  digitalWrite(sens2_1,LOW);
digitalWrite(sens2_2,LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(sens1_1,OUTPUT);
  pinMode(sens1_2,OUTPUT);
    pinMode(sens2_1,OUTPUT);
  pinMode(sens2_2,OUTPUT);
      pinMode( vit1,OUTPUT);
  pinMode(vit2,OUTPUT);
   irrecv.enableIRIn();
irrecv.blink13(true);
  Serial.begin(9600);
  analogWrite(vit1,210);//left
  analogWrite(vit2,135);//right
}

void loop() {
  // put your main code here, to run repeatedly:
  
 if (irrecv.decode(&results))//a9ra lvaleur
  { (message)=(results.value,HEX);
    Serial.println(results.value,HEX);
    irrecv.resume();
    if(results.value==UP){//l9oddem
      avant1();
      avant2();
    }
    if(results.value==DOWN){//lteli
      arriere1();
      arriere2();
    }
    if(results.value==RIGHT){//dour ymin
      avant1();
      arriere2();
    }
    if(results.value==LEFT){//dour ysar
      arriere1();
      avant2();
    }
    if(results.value==OK){//stop
      stop1();
      stop2();
    }
  }
}
