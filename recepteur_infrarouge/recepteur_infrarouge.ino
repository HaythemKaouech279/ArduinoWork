#include <IRremote.h>


const char DIN_RECEPTEUR_INFRAROUGE = 2;
String resultat;
String resultat2;
IRrecv monRecepteurInfraRouge (DIN_RECEPTEUR_INFRAROUGE);

decode_results messageRecu;

void setup()
{
 Serial.begin(9600);
 monRecepteurInfraRouge.enableIRIn();
 monRecepteurInfraRouge.blink13(true);
}

void loop(){

  if (monRecepteurInfraRouge.decode(&messageRecu))
  { (resultat)=(messageRecu.value);
    Serial.println(messageRecu.value);
    
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
 
 resultat2="IP";
 }
            else if((resultat)=="1535358491"){
 
 resultat2="F2";
 }
             else if((resultat)=="3622325019"){
 
 resultat2="F3";
 }
              else if((resultat)=="1386468383"){
 
 resultat2="F4";
 }
               else if((resultat)=="3810010651"){
 
 resultat2="touche haut";
 }
                else if((resultat)=="1942930995"){
 
 resultat2="touche bas";
 }
 Serial.println(resultat2);
    delay(500);
    monRecepteurInfraRouge.resume();
  }
  
  delay(1);
  
}
