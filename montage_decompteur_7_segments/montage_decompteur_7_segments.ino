int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int bz=10;
int bt=9;
void setup() {
   pinMode(a,OUTPUT);
 pinMode(b,OUTPUT);
 pinMode(c,OUTPUT);
 pinMode(d,OUTPUT);
 pinMode(e,OUTPUT);
 pinMode(f,OUTPUT);
 pinMode(g,OUTPUT);
 pinMode(bz,OUTPUT);
 pinMode(bt,INPUT);
}

void loop() {
   digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
if(digitalRead(bt)==HIGH){
   digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay(1000);
    digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 
 delay(1000);
  digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 
 delay(1000); 
   digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 
 delay(1000);
   digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);

 delay(1000);
  digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);

 delay(1000);
   digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,HIGH);
 delay(1000);
   digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,HIGH);
 delay(1000);
   digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);

 delay(1000);
  digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
  delay(200);
 digitalWrite(bz,HIGH);
 delay(1000);
  digitalWrite(bz,LOW);
}
}


