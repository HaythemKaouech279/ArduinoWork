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
int bz = 0;
int n;
int n1;
int n2;
int n3;
int n4;


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
  pinMode(bz,OUTPUT);
 n=2110;

}

void loop() {
n4=(n/1000);
n3=((n/100)%10);
n2=((n/10)%10);
n1=(n%10);

digit1();
afficher(n1);
delay(5);
digitalWrite(d1,LOW);
digit2();
afficher(n2);
delay(5);
digitalWrite(d2,LOW);
digit3();
afficher(n3);
delay(5);
digitalWrite(d3,LOW);
digit4();
afficher(n4);
delay(5);
digitalWrite(d4,LOW);
if (digitalRead(bt)== 1){
  while((n4!=0)||(n3!=0)||(n2!=0)||(n1!=0))
  {
   while(n1!=0){
      n1=(n1-1);
      for (int i=1;i<=50;i++){
      digit1();
      afficher(n1);
      delay(5);
      digitalWrite(d1,LOW);
      digit2();
      afficher(n2);
      delay(5);
      digitalWrite(d2,LOW);
      digit3();
      afficher(n3);
      delay(5);
      digitalWrite(d3,LOW);
      digit4();
      afficher(n4);
      delay(5);
      digitalWrite(d4,LOW);
      
     }
    }
    
    if (n2!=0){
     n2=(n2-1);
     n1=9;
      for (int i=1;i<= 50;i++){
      digit1();
      afficher(n1);
      delay(5);
      digitalWrite(d1,LOW);
      digit2();
      afficher(n2);
      delay(5);
      digitalWrite(d2,LOW);
      digit3();
      afficher(n3);
      delay(5);
      digitalWrite(d3,LOW);
      digit4();
      afficher(n4);
      delay(5);
      digitalWrite(d4,LOW);
      
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
      digitalWrite(d1,LOW);
      digit2();
      afficher(n2);
      delay(5);
      digitalWrite(d2,LOW);
      digit3();
      afficher(n3);
      delay(5);
      digitalWrite(d3,LOW);
      digit4();
      afficher(n4);
      delay(5);
      digitalWrite(d4,LOW);
      
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
      digitalWrite(d1,LOW);
      digit2();
      afficher(n2);
      delay(5);
      digitalWrite(d2,LOW);
      digit3();
      afficher(n3);
      delay(5);
      digitalWrite(d3,LOW);
      digit4();
      afficher(n4);
      delay(5);
      digitalWrite(d4,LOW);
      
     } 
    }
  }
  digitalWrite(bz,HIGH);
  delay(1000);
   digitalWrite(bz,LOW);
}


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

