#include <IRremote.h>


const char DIN_RECEPTEUR_INFRAROUGE = 2;

IRrecv monRecepteurInfraRouge (DIN_RECEPTEUR_INFRAROUGE);

decode_results messageRecu;
int dp=1;
int a=13;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int d11=9;
int d22=10;
int d33=11;
int d44=12;
String resultat;
String resultat2;
int bz = 0;
int n;
int n1=0;
int n2=0;
int n3=0;
int n4=0;
int d1=0;
int d2=0;
int d3=0;
int d4=0;


void setup() {
     monRecepteurInfraRouge.enableIRIn();
 monRecepteurInfraRouge.blink13(true);
   pinMode(dp,OUTPUT);
   pinMode(a,OUTPUT);
 pinMode(b,OUTPUT);
 pinMode(c,OUTPUT);
 pinMode(d,OUTPUT);
 pinMode(e,OUTPUT);
 pinMode(f,OUTPUT);
 pinMode(g,OUTPUT);
 pinMode(d11,OUTPUT);
 pinMode(d22,OUTPUT);
 pinMode(d33,OUTPUT);
 pinMode(d44,OUTPUT);
 
  pinMode(bz,OUTPUT);

Serial.begin(9600);

}

void loop() {
 digit1();
afficher(n1);
delay(5);
digitalWrite(d11,LOW);
digit2();
afficher(n2);
delay(5);
digitalWrite(d22,LOW);
digit3();
afficher(n3);
delay(5);
digitalWrite(d33,LOW);
digit4();
afficher(n4);
delay(5);
digitalWrite(d44,LOW);

while(resultat2!="OK")

{ digit1();
afficher(n1);
delay(5);
  delay(5);
digitalWrite(d11,LOW);
digit2();
afficher(n2);
delay(5);
digitalWrite(d22,LOW);
digit3();
afficher(n3);
delay(5);
digitalWrite(d33,LOW);
digit4();
afficher(n4);
delay(5);
digitalWrite(d44,LOW);  
  if (monRecepteurInfraRouge.decode(&messageRecu))
  { (resultat)=(messageRecu.value);
  
    if((resultat)=="2327013275"){
 
 resultat2="touche1";
 }
 else if((resultat)=="4198438303"){
 
 resultat2="touche0";
 }
  else if((resultat)=="304127099"){
 
 resultat2="touche2";
 }
   else if((resultat)=="50714367"){

 resultat2="touche3";
 }
    else if((resultat)=="1373912347"){

 resultat2="touche4";
 }
     else if((resultat)=="2878444831"){
 
 resultat2="touche5";
 }
      else if((resultat)=="4287727287"){
 
 resultat2="touche6";
 }
       else if((resultat)=="4034314555"){
 
 resultat2="touche7";
 }
        else if((resultat)=="2351064443"){

 resultat2="touche8";
 }
         else if((resultat)=="3855596927"){

 resultat2="touche9";
 }
          else if((resultat)=="4131161687"){
 
 resultat2="OK";
 }
           else if((resultat)=="961851831"){
 resultat2="ip";
 d1=1;
 d2=0;
 d3=0;
 d4=0;
 }
            else if((resultat)=="1535358491"){
 resultat2="F2";
 d2=1;
 d1=0;
 d3=0;
 d4=0;
 }
             else if((resultat)=="4294967295"){
resultat2="f3"; 
d3=1;
d1=0;
d2=0;
d4=0;
 }
              else if((resultat)=="16720605"){
resultat2="f4"; 
d1=0;
d2=0;
d3=0;
d4=1;
 }
    
    monRecepteurInfraRouge.resume();
  }
  
  delay(1);
  
  if ((d1==1)&&(resultat2==("touche0")))
  n1=0;
  else if ((d1==1)&&(resultat2==("touche1"))){
  n1=1;}
    else if ((d1==1)&&(resultat2==("touche2"))){
  n1=2;}
    else if ((d1==1)&&(resultat2==("touche3"))){
  n1=3;}
    else if ((d1==1)&&(resultat2==("touche4"))){
  n1=4;}
    else if ((d1==1)&&(resultat2==("touche5"))){
  n1=5;}
      else if ((d1==1)&&(resultat2==("touche6"))){
  n1=6;}
      else if ((d1==1)&&(resultat2==("touche7"))){
  n1=7;}
      else if ((d1==1)&&(resultat2==("touche8"))){
  n1=8;}
      else if ((d1==1)&&(resultat2==("touche9"))){
  n1=9;}
  
    if ((d2==1)&&(resultat2==("touche0")))
  n2=0;
  else if ((d2==1)&&(resultat2==("touche1"))){
  n2=1;}
    else if ((d2==1)&&(resultat2==("touche2"))){
  n2=2;}
    else if ((d2==1)&&(resultat2==("touche3"))){
  n2=3;}
    else if ((d2==1)&&(resultat2==("touche4"))){
  n2=4;}
    else if ((d2==1)&&(resultat2==("touche5"))){
  n2=5;}
      else if ((d2==1)&&(resultat2==("touche6"))){
  n2=6;}
      else if ((d2==1)&&(resultat2==("touche7"))){
  n2=7;}
      else if ((d2==1)&&(resultat2==("touche8"))){
  n2=8;}
      else if ((d2==1)&&(resultat2==("touche9"))){
  n2=9;}

     if ((d3==1)&&(resultat2==("touche0")))
  n3=0;
  else if ((d3==1)&&(resultat2==("touche1"))){
  n3=1;}
    else if ((d3==1)&&(resultat2==("touche2"))){
  n3=2;}
    else if ((d3==1)&&(resultat2==("touche3"))){
  n3=3;}
    else if ((d3==1)&&(resultat2==("touche4"))){
  n3=4;}
    else if ((d3==1)&&(resultat2==("touche5"))){
  n3=5;}
      else if ((d3==1)&&(resultat2==("touche6"))){
  n3=6;}
      else if ((d3==1)&&(resultat2==("touche7"))){
  n3=7;}
      else if ((d3==1)&&(resultat2==("touche8"))){
  n3=8;}
      else if ((d3==1)&&(resultat2==("touche9"))){
  n3=9;}

     if ((d4==1)&&(resultat2==("touche0")))
  n4=0;
  else if ((d4==1)&&(resultat2==("touche1"))){
  n4=1;}
    else if ((d4==1)&&(resultat2==("touche2"))){
  n4=2;}
    else if ((d4==1)&&(resultat2==("touche3"))){
  n4=3;}
    else if ((d4==1)&&(resultat2==("touche4"))){
  n4=4;}
    else if ((d4==1)&&(resultat2==("touche5"))){
  n4=5;}
      else if ((d4==1)&&(resultat2==("touche6"))){
  n4=6;}
      else if ((d4==1)&&(resultat2==("touche7"))){
  n4=7;}
      else if ((d4==1)&&(resultat2==("touche8"))){
  n4=8;}
      else if ((d4==1)&&(resultat2==("touche9"))){
  n4=9;}
 Serial.println(resultat); 
Serial.println(resultat2);
  
}
if (resultat2=="OK")
  while((n4!=0)||(n3!=0)||(n2!=0)||(n1!=0))
  {
   while(n1!=0){
      n1=(n1-1);
      for (int i=1;i<=50;i++){
      digit1();
      afficher(n1);
      delay(5);
      digitalWrite(d11,LOW);
      digit2();
      afficher(n2);
      delay(5);
      digitalWrite(d22,LOW);
      digit3();
      afficher(n3);
      delay(5);
      digitalWrite(d33,LOW);
      digit4();
      afficher(n4);
      delay(5);
      digitalWrite(d44,LOW);
      
     }
    }
    
    if (n2!=0){
     n2=(n2-1);
     n1=9;
      for (int i=1;i<= 50;i++){
      digit1();
      afficher(n1);
      delay(5);
      digitalWrite(d11,LOW);
      digit2();
      afficher(n2);
      delay(5);
      digitalWrite(d22,LOW);
      digit3();
      afficher(n3);
      delay(5);
      digitalWrite(d33,LOW);
      digit4();
      afficher(n4);
      delay(5);
      digitalWrite(d44,LOW);
      
     }  
    }
    else if (n3!=0){
           n3=(n3-1);
     n2=9;
     n1=9;
      for (int i=1;i<= 50;i++){
      digit1();
      afficher(n1);
      delay(5);
      digitalWrite(d11,LOW);
      digit2();
      afficher(n2);
      delay(5);
      digitalWrite(d22,LOW);
      digit3();
      afficher(n3);
      delay(5);
      digitalWrite(d33,LOW);
      digit4();
      afficher(n4);
      delay(5);
      digitalWrite(d44,LOW);
      
     } 
    }
        else if (n4!=0){
           n4=(n4-1);
     n3=9;
     n2=9;
     n1=9;
      for (int i=1;i<= 50;i++){
      digit1();
      afficher(n1);
      delay(5);
      digitalWrite(d11,LOW);
      digit2();
      afficher(n2);
      delay(5);
      digitalWrite(d22,LOW);
      digit3();
      afficher(n3);
      delay(5);
      digitalWrite(d33,LOW);
      digit4();
      afficher(n4);
      delay(5);
      digitalWrite(d44,LOW);
      
     } 
    }
  }
 resultat2="0";
}



void afficher(int nombre){
 if (nombre == 0 ){
  digitalWrite(dp,LOW);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
 } 
 else if (nombre == 1 ){
  digitalWrite(dp,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  }
 else if(nombre == 2){
  digitalWrite(dp,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  }
 else if(nombre == 3){
  digitalWrite(dp,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  }
 else if(nombre == 4){
  digitalWrite(dp,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  }
 else if(nombre == 5){
  digitalWrite(dp,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
      
    }
 else if(nombre == 6){
  digitalWrite(dp,HIGH);
  digitalWrite(a,LOW);   
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
      
    }
 else if(nombre == 7){
  digitalWrite(dp,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
      
    }
 else if(nombre == 8){
  digitalWrite(dp,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
      
    }  
 else if(nombre == 9){
  digitalWrite(dp,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
      
    }   
 
  
}
    void digit1(){
 digitalWrite(d11,HIGH);
}
void digit2(){
 digitalWrite(d22,HIGH);
}
void digit3(){
 digitalWrite(d33,HIGH); 
}
void digit4(){
 digitalWrite(d44,HIGH); 
} 

