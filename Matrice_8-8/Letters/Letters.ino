int val=2;
int rclck=3;
int srclck=4;
int c[]={5,6,7,8,9,10,11,12};
int mat[8][8];

void store();
void power(int i);
void generate_line(int*t);
void generate_mat(int mat[8][8]);
void generate_letter(int*mat);
void generate_word(char*ch,int mat[8][8]);
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
generate_word("SIBNEKH ",mat);
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
void decalage(int mat[8][8]){
for(int i=0;i<8;i++){
  for(int j=0;j<7;j++){
    mat[i][j]=mat[i][j+1];
  }
}}
void generate_letter(char c,int mat[8][8]){
  int t[8][8];
  int i,j;
  for( i=0;i<8;i++){
    for(  j=0;j<8;j++){
      t[i][j]=0;
    }
  }
  switch (c){
    case 'A':
    t[1][1]=1;
    t[1][2]=1;
    t[2][0]=1;
    t[2][3]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[6][3]=1;
    t[3][3]=1;
    t[4][3]=1;
    t[5][3]=1;
    t[3][1]=1;
    t[3][2]=1;

    break;
    case 'B':
    t[1][0]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[6][1]=1;
    t[6][2]=1;
    t[3][1]=1;
    t[3][2]=1;
    t[4][3]=1;
    t[5][3]=1;
    t[2][3]=1;
    break;
    case 'C':
    t[1][1]=1;
    t[1][2]=1;
    t[1][3]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][1]=1;
    t[6][2]=1;
    t[6][3]=1;   
    break;
    case 'D':
    t[1][0]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[2][3]=1;
    t[3][3]=1;
    t[4][3]=1;
    t[5][3]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[6][1]=1;
    t[6][2]=1;
    break;   
    case 'E':
    t[1][0]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[1][3]=1;
    t[3][1]=1;
    t[3][2]=1;
    t[3][3]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[6][1]=1;
    t[6][2]=1;
    t[6][3]=1;   
    break;     
    case 'F':
    t[1][0]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[1][3]=1;
    t[3][1]=1;
    t[3][2]=1;
    t[3][3]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1; 
    break; 
    break;
    case 'G':
    t[1][1]=1;
    t[1][2]=1;
    t[1][3]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[6][1]=1;
    t[6][2]=1;
    t[6][3]=1;
    t[5][3]=1; 
    t[4][3]=1;
    t[3][2]=1; 
    t[3][3]=1;   
    t[3][4]=1; 
    break;    
    case 'H':
    t[1][0]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[1][3]=1;
    t[2][3]=1;
    t[3][3]=1;
    t[4][3]=1;
    t[5][3]=1;
    t[6][3]=1;
    t[3][3]=1;
    t[3][1]=1;
    t[3][2]=1;
    t[4][3]=1;
    t[4][1]=1;
    t[4][2]=1;
    break;   
    case 'I':
    t[1][0]=1;
    t[1][3]=1;
    t[1][1]=1;
    t[2][1]=1;
    t[3][1]=1;
    t[4][1]=1;
    t[5][1]=1;
    t[6][1]=1;
    t[1][2]=1;
    t[2][2]=1;
    t[3][2]=1;
    t[4][2]=1;
    t[5][2]=1;
    t[6][0]=1;
    t[6][2]=1;
    t[6][3]=1;
    break; 
    case 'J':
    t[1][0]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[1][3]=1;
    t[3][2]=1;
    t[2][2]=1;
    t[3][2]=1;
    t[4][2]=1;
    t[5][2]=1;
    t[6][1]=1;
    t[5][0]=1;
    t[4][0]=1;
    break;
    case 'K':
    t[1][0]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[6][3]=1;
    t[5][2]=1;
    t[4][1]=1;
    t[1][3]=1;
    t[2][2]=1;
    t[3][1]=1;
    break;  
    case 'L':
    t[1][0]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[6][1]=1;
    t[6][2]=1;
    t[6][3]=1;
    break;
    case 'M':
    t[1][0]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[1][4]=1;
    t[2][4]=1;
    t[3][4]=1;
    t[4][4]=1;
    t[5][4]=1;
    t[6][4]=1;
    t[2][1]=1;
    t[2][3]=1;
    t[3][2]=1;
    break;  
    case 'N':
    t[1][0]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[1][4]=1;
    t[2][4]=1;
    t[3][4]=1;
    t[4][4]=1;
    t[5][4]=1;
    t[6][4]=1;
    t[1][1]=1;
    t[3][2]=1;
    t[5][3]=1;
    break;
    case 'O':
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[2][3]=1;
    t[3][3]=1;
    t[4][3]=1;
    t[5][3]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[6][1]=1;
    t[6][2]=1;
    break;
    case 'P':
    t[1][0]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[3][1]=1;
    t[3][2]=1;
    t[2][3]=1;
    break;
    case 'Q':
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[2][3]=1;
    t[3][3]=1;
    t[4][3]=1;
    t[5][3]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[6][1]=1;
    t[6][2]=1;
    t[4][1]=1;
    t[5][2]=1;
    t[6][3]=1;
    break;
    case 'R':
    t[1][0]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[3][1]=1;
    t[3][2]=1;
    t[2][3]=1;
    t[4][1]=1;
    t[5][2]=1;
    t[6][3]=1;
    break;
    case 'S':
    t[1][1]=1;
    t[1][2]=1;
    t[2][0]=1;
    t[2][3]=1;
    t[3][1]=1;
    t[4][2]=1;
    t[5][3]=1;
    t[6][1]=1;
    t[6][2]=1;
    t[5][0]=1;
 
    break;
    case 'T':
    t[1][0]=1;
    t[1][3]=1;
    t[1][1]=1;
    t[2][1]=1;
    t[3][1]=1;
    t[4][1]=1;
    t[5][1]=1;
    t[6][1]=1;
    t[1][2]=1;
    t[2][2]=1;
    t[3][2]=1;
    t[4][2]=1;
    t[5][2]=1;
    t[6][2]=1;
    break;
    case 'U':
    t[1][0]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[6][1]=1;
    t[6][2]=1;
    t[1][3]=1;
    t[2][3]=1;
    t[3][3]=1;
    t[4][3]=1;
    t[5][3]=1;
    t[6][3]=1;
    break; 
    case 'V':
    t[1][0]=1;
    t[2][0]=1;
    t[1][4]=1;
    t[2][4]=1;
    t[5][1]=1;
    t[5][3]=1;
    t[6][2]=1;
    break;
    case 'W':
    t[1][0]=1;
    t[2][0]=1;
    t[3][0]=1;
    t[4][0]=1;
    t[5][0]=1;
    t[6][0]=1;
    t[1][4]=1;
    t[2][4]=1;
    t[3][4]=1;
    t[4][4]=1;
    t[5][4]=1;
    t[6][4]=1;
    t[2][1]=1;
    t[2][3]=1;
    t[3][2]=1;
    break;
    case 'X':
    t[1][0]=1;
    t[1][4]=1;
    t[6][0]=1;
    t[6][4]=1;
    t[3][1]=1;
    t[3][3]=1;
    t[5][1]=1;
    t[5][3]=1;
    t[4][2]=1;
    break;
    case 'Y':
    t[1][0]=1;
    t[1][4]=1;
    t[2][1]=1;
    t[2][3]=1;
    t[3][2]=1;
    t[4][2]=1;
    t[5][2]=1;
    t[6][2]=1;
    break;
    case 'Z':
    t[1][0]=1;
    t[1][1]=1;
    t[1][2]=1;
    t[1][3]=1;
    t[3][2]=1;
    t[5][1]=1;
    t[6][0]=1;
    t[6][1]=1;
    t[6][2]=1;
    t[6][3]=1;
    t[6][2]=1;
    break; 
    default:
    break;
  }
 i=0;

 do{
  decalage(mat);
    for( j=0;j<8;j++){
    mat[j][7]=t[j][i];
  }
  for(int del=0;del<10;del++){
    generate_mat(mat);
  }
  
  i++;
 }while(i<6);
}
void generate_word(char*ch,int mat[8][8]){
  int i=0;
while(ch[i]!='\0'){
  generate_letter(ch[i],mat);
  i++;
  
}
}
