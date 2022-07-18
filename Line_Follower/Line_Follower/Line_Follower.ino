#define pwmd 3
#define d1 5
#define d2 9
#define g2 6  
#define g1 10
#define pwmg 11
#define va 250
#define cpD 8
#define cpG 13
#define cpCD 7
#define cpCG 12
#define cpA 4
int testTurn=0;
int CG,CD,CCG,CCD,CA;
//the states
typedef enum {
  Goal,

  Initial,
  FirstTurn,
  Triangle,
  Umberella,
  Cercle,
  Transition,
  All
} State;
State CurrentState=Initial;

void READ(){
     CCG=digitalRead(cpCG);
     CCD=digitalRead(cpCD);
     CG=digitalRead(cpG);
     CD=digitalRead(cpD);
     CA=digitalRead(cpA);
}

void arreter(){
  analogWrite(pwmg,0);
  analogWrite(pwmd,0); 
  digitalWrite(d2,LOW);
  digitalWrite(d1,LOW);
    digitalWrite(g2,LOW);
  digitalWrite(g1,LOW);
}
void avancer (){
  analogWrite(pwmg,va);
  analogWrite(pwmd,va); 
  digitalWrite(d2,HIGH);
  digitalWrite(d1,LOW);
    digitalWrite(g2,HIGH);
  digitalWrite(g1,LOW);
  
}
void smoothDroite(){
  analogWrite(pwmg,150);
  analogWrite(pwmd,100); 
  digitalWrite(d1,HIGH);
  digitalWrite(d2,LOW);
    digitalWrite(g2,HIGH);
  digitalWrite(g1,LOW);
}
void smoothGauche(){
  analogWrite(pwmg,100);
  analogWrite(pwmd,150); 
  digitalWrite(d1,HIGH);
  digitalWrite(d2,LOW);
    digitalWrite(g2,HIGH);
  digitalWrite(g1,LOW);
}
void droite() {
  analogWrite(pwmg,150);
  analogWrite(pwmd,150); 
  digitalWrite(d1,HIGH);
  digitalWrite(d2,LOW);
    digitalWrite(g2,HIGH);
  digitalWrite(g1,LOW);
  
}
void gauche() {
  analogWrite(pwmg,150);
  analogWrite(pwmd,150); 
  digitalWrite(d2,HIGH);
  digitalWrite(d1,LOW);
    digitalWrite(g1,HIGH);
  digitalWrite(g2,LOW);
  
}
 
void BlackFollower()
    { 
      READ();
    
    if(CCD&&CCG){
    avancer();}
    else if(CD&&!CG){
    droite();
    }
    else if(!digitalRead(cpCD)&&(digitalRead(cpCG))){
    gauche();
    }
    
   
}
void setup() {
pinMode(pwmg, OUTPUT);
pinMode(pwmd, OUTPUT);
pinMode(d1, OUTPUT);
pinMode(d2, OUTPUT);
pinMode(g2, OUTPUT);
pinMode(g1, OUTPUT);
pinMode(cpD, INPUT);
pinMode(cpG, INPUT);
pinMode(cpCD, INPUT);
pinMode(cpCG, INPUT);
pinMode(cpA, INPUT);


}

void loop() {
READ();
switch(CurrentState){

  case Initial :{
    arreter();
    delay (500);
    CurrentState=FirstTurn;
    
  }break;

case FirstTurn :
{READ();
  if(!CA&&CD&&CG&&CCG&&CCD){
    while(CD||CG){
      gauche();
    }
    CurrentState=Triangle;
  }
  else if(!CG&&!CD){
    if(CCG)droite();
    else if (CCD)gauche();
    else avancer();
  }
  else if (CD){
    while(CD||CG){
    droite();}
    
  }
  else if(CG) gauche();
  else avancer();
}break;
  case Triangle :
  { READ();
    if (CA&&CD&&CG&&CCG&&CCD){
    while(CD||CG){
      avancer();
    }
    CurrentState = Umberella;
  }
   else if(!CD&&!CG){
      if(CCG)droite();
      else if (CCD)gauche();
      else avancer();
    }
    else if (CD){
    
    droite();}
    
  
  else if(CG) gauche();
  }break;

  case Umberella :
  
  { READ();  
    if (CD) CurrentState=Cercle;
      if(CCG)droite();
      else if (CCD)gauche();
      else avancer();
  }break;

  case Cercle:
  { 

    if(!CG&&!CD&&!CCG&&!CCD) CurrentState = Transition;
    if (CG)
      gauche();
    
    else if (CD) smoothDroite();
    else if(CCD) smoothDroite();
    else if (CCG) smoothGauche();
    else (avancer);
  }break;
   
   
  case Transition :
  {  
    READ();
    if(CG&&CD){
      if(!CCD&&!CCG){
        avancer();
      }
      else if(!CCD&&CCG){
        droite();
      }
      else if(CCD&&!CCG){
        gauche();
      }
      else avancer();
    }
    else if(!CG&&!CD){
      if(CCD&&CCG)avancer();
      else if(CCD&&!CCG){
        droite();
      }
      else if(!CCD&&CCG){
        gauche();
      }
      else avancer();
    }
    else if (!CD&&CG){
      if(CCD&&CCG){
        gauche();
      }
      else if(!CCD&&CCG){
        droite();
      }
      else avancer();
    }
    else if (CD&&!CG){
      if(CCD&&CCG){
        droite();
      }
      else if(!CCD&&CCG){
        gauche();
      }
      else avancer();
    }
    else avancer();
  }break;
  
  case Goal:
  {
    arreter();
      
    }break;
  }
}
