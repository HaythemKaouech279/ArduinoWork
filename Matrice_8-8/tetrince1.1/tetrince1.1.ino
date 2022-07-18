int val=2;
int rclck=3;
int srclck=4;
int c[]={5,6,7,8,9,10,11,12};
int mat[8][8];

void store();
void power(int i);
void generate_line(int*t);
void generate_mat(int mat[8][8]);
void shema(int mat[8][8]);
void setup() {
  
  pinMode(val,OUTPUT); 
  pinMode(rclck,OUTPUT); 
  pinMode(srclck,OUTPUT); 
  pinMode(c[0],OUTPUT); 
  pinMode(c[1],OUTPUT);
  pinMode(c[2],OUTPUT);
  pinMode(c[3],OUTPUT);
  pinMode(c[4],OUTPUT);
  pinMode(c[5],OUTPUT);
  pinMode(c[6],OUTPUT);
  pinMode(c[7],OUTPUT);
  delay(10);
for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
    mat[i][j]=0;
  }
}

}

void loop() { 
generate_mat(mat);
}


void store(){
 digitalWrite(srclck,LOW);
 delay(1);
digitalWrite(srclck,HIGH);
delay(1);
}

void power(int i){
  switch( i){
    case 0 :shiftOut(val,rclck,MSBFIRST,1);store();break;
    case 1 :shiftOut(val,rclck,MSBFIRST,2);store();break;
    case 2 :shiftOut(val,rclck,MSBFIRST,4);store();break;
    case 3 :shiftOut(val,rclck,MSBFIRST,8);store();break;
    case 4 :shiftOut(val,rclck,MSBFIRST,16);store();break;
    case 5 :shiftOut(val,rclck,MSBFIRST,32);store();break;
    case 6 :shiftOut(val,rclck,MSBFIRST,64);store();break;
    case 7 :shiftOut(val,rclck,MSBFIRST,128);store();break;
    default:shiftOut(val,rclck,MSBFIRST,0);store();break;
  }
}


void generate_line(int*t){
for(int i=0;i<8;i++){
  if(t[i]==1)digitalWrite(c[i],LOW);
  else digitalWrite(c[i],HIGH);
}
}

void generate_mat(int mat[8][8]){
  for(int i=0;i<8;i++){
    power(i);
    generate_line(mat[i]);
  }
}

void shema(int mat[8][8]){
  randomSeed(analogRead(A0));
int randomnumber=random(1,5);
switch (randomnumber){
case 1 :
break;
case 2 :
break;
case 3 :
break;
case 4 :
break;
default :
break;
} 
}
