int val=2;
int rclck=3;
int srclck=4;
int row1=5; //row1 is row8 in the datasheet
int row2=6;
int row3=7;
int row4=8;
int row5=9;
int row6=10;
int row7=11;
int row8=12;
int left=13;
int right=1;
int randomnumber;
float j=2;
int r1,c1,r2,c2,r3,c3,r4,c4;
int test;
int rows[64];
int columns[64];
int k=1;
int z=0;
int y;




// Jihed
int currentLigne;
int currentCollone;
int currentSchema;
float currentAttente = 0.1;

void setup() {
  pinMode(val,OUTPUT); 
  pinMode(rclck,OUTPUT); 
  pinMode(srclck,OUTPUT); 
  pinMode(row1,OUTPUT); 
  pinMode(row2,OUTPUT);
  pinMode(row3,OUTPUT);
  pinMode(row4,OUTPUT);
  pinMode(row5,OUTPUT);
  pinMode(row6,OUTPUT);
  pinMode(row7,OUTPUT);
  pinMode(row8,OUTPUT);
  pinMode(right,INPUT);
  pinMode(left,INPUT);
  randomSeed(analogRead(A0));
  
  //Serial.begin(9600);
currentSchema = 1;
  }


void loop() {
  initialisation();
  while(currentCollone >= 1) {
  for(int i=0;i<100; i++) {
    data(currentLigne, currentCollone);
  }
    currentCollone = currentCollone - 1;
    delay(100);
  }
  currentSchema = currentSchema+1;
 }


// end Jihed
void enter(int nombre){
  if (nombre==0){
    digitalWrite(srclck,LOW);
     
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
    
    digitalWrite(rclck,LOW);
    digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(srclck,HIGH);
  }
  else if (nombre==1){
    digitalWrite(srclck,LOW);
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
    digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
    digitalWrite(srclck,HIGH);
  }
    else if (nombre==2){
    digitalWrite(srclck,LOW);
    
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
     digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
    digitalWrite(srclck,HIGH);
  }
      else if (nombre==3){
    digitalWrite(srclck,LOW);
    
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
     digitalWrite(val,HIGH);
    digitalWrite(rclck,HIGH);
     
     digitalWrite(rclck,LOW);
     digitalWrite(val,LOW);
    digitalWrite(rclck,HIGH);
     
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
    
    digitalWrite(rclck,LOW);
    digitalWrite(rclck,HIGH);
    digitalWrite(srclck,HIGH);
  }
        else if (nombre==4){
          digitalWrite(srclck,LOW);
    
     digitalWrite(rclck,LOW);
     digitalWrite(val,LOW);
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
    digitalWrite(srclck,HIGH);
  }
          else if (nombre==5){
    digitalWrite(srclck,LOW);
    
     digitalWrite(rclck,LOW);
    digitalWrite(val,LOW);
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
    digitalWrite(srclck,HIGH);
  }
            else if (nombre==6){
    digitalWrite(srclck,LOW);
     
     digitalWrite(rclck,LOW);
    digitalWrite(val,LOW);
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
    digitalWrite(srclck,HIGH);
  }
              else if (nombre==7){
    digitalWrite(srclck,LOW);
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
    digitalWrite(srclck,HIGH);
  }
  

}
void lighten(int row,int column){
 if (row==1){
    digitalWrite(row1,LOW);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,HIGH);
    digitalWrite(row5,HIGH);
    digitalWrite(row6,HIGH);
    digitalWrite(row7,HIGH);
    digitalWrite(row8,HIGH);
    if(column==1){
     enter(0);  
    }
    else   if(column==2){
     enter(1);
      }
    else   if(column==3){
     enter(2);
      }
    else   if(column==4){
     enter(3);
      }
    else   if(column==5){
     enter(4);
      } 
    else   if(column==6){
     enter(5);
      }
    else   if(column==7){
     enter(6);
      }
    else   if(column==8){
     enter(7);
      }              
  }
  else if (row==2){
    digitalWrite(row1,HIGH);
    digitalWrite(row2,LOW);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,HIGH);
    digitalWrite(row5,HIGH);
    digitalWrite(row6,HIGH);
    digitalWrite(row7,HIGH);
    digitalWrite(row8,HIGH);
    if(column==1){
     enter(0);  
    }
    else   if(column==2){
     enter(1);
      }
    else   if(column==3){
     enter(2);
      }
    else   if(column==4){
     enter(3);
      }
    else   if(column==5){
     enter(4);
      } 
    else   if(column==6){
     enter(5);
      }
    else   if(column==7){
     enter(6);
      }
    else   if(column==8){
     enter(7);
      }              
  }
  else if (row==3){
    digitalWrite(row1,HIGH);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,LOW);
    digitalWrite(row4,HIGH);
    digitalWrite(row5,HIGH);
    digitalWrite(row6,HIGH);
    digitalWrite(row7,HIGH);
    digitalWrite(row8,HIGH);
    if(column==1){
     enter(0);  
    }
    else   if(column==2){
     enter(1);
      }
    else   if(column==3){
     enter(2);
      }
    else   if(column==4){
     enter(3);
      }
    else   if(column==5){
     enter(4);
      } 
    else   if(column==6){
     enter(5);
      }
    else   if(column==7){
     enter(6);
      }
    else   if(column==8){
     enter(7);
      }              
  }
  else if (row==4){
    digitalWrite(row1,HIGH);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,LOW);
    digitalWrite(row5,HIGH);
    digitalWrite(row6,HIGH);
    digitalWrite(row7,HIGH);
    digitalWrite(row8,HIGH);
    if(column==1){
     enter(0);  
    }
    else   if(column==2){
     enter(1);
      }
    else   if(column==3){
     enter(2);
      }
    else   if(column==4){
     enter(3);
      }
    else   if(column==5){
     enter(4);
      } 
    else   if(column==6){
     enter(5);
      }
    else   if(column==7){
     enter(6);
      }
    else   if(column==8){
     enter(7);
      }              
  }
  else if (row==5){
    digitalWrite(row1,HIGH);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,HIGH);
    digitalWrite(row5,LOW);
    digitalWrite(row6,HIGH);
    digitalWrite(row7,HIGH);
    digitalWrite(row8,HIGH);
    if(column==1){
     enter(0);  
    }
    else   if(column==2){
     enter(1);
      }
    else   if(column==3){
     enter(2);
      }
    else   if(column==4){
     enter(3);
      }
    else   if(column==5){
     enter(4);
      } 
    else   if(column==6){
     enter(5);
      }
    else   if(column==7){
     enter(6);
      }
    else   if(column==8){
     enter(7);
      }              
  }
  else if (row==6){
    digitalWrite(row1,HIGH);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,HIGH);
    digitalWrite(row5,HIGH);
    digitalWrite(row6,LOW);
    digitalWrite(row7,HIGH);
    digitalWrite(row8,HIGH);
    if(column==1){
     enter(0);  
    }
    else   if(column==2){
     enter(1);
      }
    else   if(column==3){
     enter(2);
      }
    else   if(column==4){
     enter(3);
      }
    else   if(column==5){
     enter(4);
      } 
    else   if(column==6){
     enter(5);
      }
    else   if(column==7){
     enter(6);
      }
    else   if(column==8){
     enter(7);
      }              
  }
  else if (row==7){
    digitalWrite(row1,HIGH);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,HIGH);
    digitalWrite(row5,HIGH);
    digitalWrite(row6,HIGH);
    digitalWrite(row7,LOW);
    digitalWrite(row8,HIGH);
    if(column==1){
     enter(0);  
    }
    else   if(column==2){
     enter(1);
      }
    else   if(column==3){
     enter(2);
      }
    else   if(column==4){
     enter(3);
      }
    else   if(column==5){
     enter(4);
      } 
    else   if(column==6){
     enter(5);
      }
    else   if(column==7){
     enter(6);
      }
    else   if(column==8){
     enter(7);
      }              
  }
  else if (row==8){
    digitalWrite(row1,HIGH);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,HIGH);
    digitalWrite(row5,HIGH);
    digitalWrite(row6,HIGH);
    digitalWrite(row7,HIGH);
    digitalWrite(row8,LOW);
    if(column==1){
     enter(0);  
    }
    else   if(column==2){
     enter(1);
      }
    else   if(column==3){
     enter(2);
      }
    else   if(column==4){
     enter(3);
      }
    else   if(column==5){
     enter(4);
      } 
    else   if(column==6){
     enter(5);
      }
    else   if(column==7){
     enter(6);
      }
    else   if(column==8){
     enter(7);
      }              
  }
}
void initialisation() {
  if(currentSchema == 1) {
    currentLigne = 3;
    currentCollone = 8; 
  } else if (currentSchema == 2) {
    currentLigne = 4;
    currentCollone = 7;
  }
     else if (currentSchema ==3 ) {
    currentLigne =4;
    currentCollone =8;
  }
      else if (currentSchema ==4 ) {
    currentLigne =3;
    currentCollone =8;
  }
}

void data(int ligne, int colonne) {
  
  if(currentSchema == 1) {
    if((ligne >= 1) && (ligne+3 <= 8) && (colonne >= 1) && (colonne <= 8)) {
      allumer(ligne, colonne, currentAttente);
      allumer(ligne+1, colonne, currentAttente);
      allumer(ligne+2, colonne, currentAttente);
      allumer(ligne+3, colonne, currentAttente);
    }
    
  } else if(currentSchema == 2) {
    if((ligne >= 1) && (ligne+1 <= 8) && (colonne >= 1) && (colonne+1 <= 8)) {
      allumer(ligne,colonne, currentAttente);
      allumer(ligne, colonne+1, currentAttente);
      allumer(ligne+1, colonne, currentAttente);
      allumer(ligne+1, colonne+1, currentAttente);
    }    
  }
     else if(currentSchema ==3 ) {
    if((ligne-1 >= 1) && (ligne+1 <= 8) && (colonne-1 >= 1) && (colonne <= 8)) {
      allumer(ligne, colonne, currentAttente);
      allumer(ligne-1, colonne-1, currentAttente);
      allumer(ligne, colonne-1, currentAttente);
      allumer(ligne+1, colonne-1, currentAttente);
    }    
  }
       else if(currentSchema ==4 ) {
    if((ligne-1 >= 1) && (ligne+1 <= 8) && (colonne-1 >= 1) && (colonne <= 8)) {
      allumer(ligne, colonne, currentAttente);
      allumer(ligne+1, colonne, currentAttente);
      allumer(ligne+1, colonne-1, currentAttente);
      allumer(ligne+2, colonne-1, currentAttente);
    }    
  }
}

void allumer(int ligne, int colonne, float attente) {
    lighten(ligne, colonne);
    delay(attente);
}

