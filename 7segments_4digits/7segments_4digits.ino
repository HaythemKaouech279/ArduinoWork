
int dp=1;
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int d1=9;
int d2=10;
int d3=11;
int d4=12;
int bt=13;

void setup() {
  pinMode(dp,OUTPUT);
   pinMode(a,OUTPUT);
 pinMode(b,OUTPUT);
 pinMode(c,OUTPUT);
 pinMode(d,OUTPUT);
 pinMode(e,OUTPUT);
 pinMode(f,OUTPUT);
 pinMode(g,OUTPUT);
 pinMode(d1,OUTPUT);
 pinMode(d2,OUTPUT);
 pinMode(d3,OUTPUT);
 pinMode(d4,OUTPUT);
 pinMode(bt,INPUT);
 

}

void loop() {

digit1();
n1();
delay(5);
digitalWrite(d1,LOW);
digit2();
n2();
delay(5);
digitalWrite(d2,LOW);
digit3();
n3();
delay(5);
digitalWrite(d3,LOW);
digit4();
n4();
delay(5);
digitalWrite(d4,LOW);
}
void digit1(){
 digitalWrite(d1,HIGH);
}
void digit2(){
 digitalWrite(d2,HIGH);
}
void digit3(){
 digitalWrite(d3,HIGH); 
}
void digit4(){
 digitalWrite(d4,HIGH); 
}

  

void n1(){
    digitalWrite(dp,HIGH);
   digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
}
void n2(){
   digitalWrite(dp,HIGH);
   digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
}
void n3(){
   digitalWrite(dp,HIGH);
   digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
}
void n4(){
   digitalWrite(dp,HIGH);
   digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
}

