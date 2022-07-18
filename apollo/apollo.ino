

#if defined(ESP32)
#include <WiFi.h>
#include <FirebaseESP32.h>
#elif defined(ESP8266)
#include <ESP8266WiFi.h>
#include <FirebaseESP8266.h>
#endif

// Provide the token generation process info.
#include <addons/TokenHelper.h>

// Provide the RTDB payload printing info and other helper functions.
#include <addons/RTDBHelper.h>

/* 1. Define the WiFi credentials */
#define WIFI_SSID "globalnet"
#define WIFI_PASSWORD "11223344"

// For the following credentials, see examples/Authentications/SignInAsUser/EmailPassword/EmailPassword.ino

/* 2. Define the API Key */
#define API_KEY "AIzaSyASFfCH0LsOGVD_-BLKyp4N2brKC1ISoAA"

/* 3. Define the RTDB URL */
#define DATABASE_URL "apollo-4d7c6-default-rtdb.firebaseio.com" //<databaseName>.firebaseio.com or <databaseName>.<region>.firebasedatabase.app

/* 4. Define the user Email and password that alreadey registerd or added in your project */
#define USER_EMAIL "haythemkaouech@gmail.com"
#define USER_PASSWORD "11223344"
String USER_ID = "08be3ba8-3f25-4404-8c2a-3b077607cd55";
// Define Firebase Data object
FirebaseData fbdo;

FirebaseAuth auth;
FirebaseConfig config;

unsigned long sendDataPrevMillis = 0;

unsigned long count = 0;
String dataCoeurArray="";
void setup()
{

pinMode(12, INPUT); // Setup for leads off detection LO +
pinMode(14, INPUT); // Setup for leads off detection LO -
  Serial.begin(115200);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("Connected with IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();

  Serial.printf("Firebase Client v%s\n\n", FIREBASE_CLIENT_VERSION);

  /* Assign the api key (required) */
  config.api_key = API_KEY;

  /* Assign the user sign in credentials */
  auth.user.email = USER_EMAIL;
  auth.user.password = USER_PASSWORD;

  /* Assign the RTDB URL (required) */
  config.database_url = DATABASE_URL;

  /* Assign the callback function for the long running token generation task */
  config.token_status_callback = tokenStatusCallback; // see addons/TokenHelper.h



  Firebase.begin(&config, &auth);

  // Comment or pass false value when WiFi reconnection will control by your code or third party library
  Firebase.reconnectWiFi(true);

  Firebase.setDoubleDigits(5);
String PATH="Clients/"+USER_ID+"/ECG";

}

void loop()
{
 dataCoeurArray="";
  for( int i =0 ;i<100;i++){
  String dataCoeur="";
if((digitalRead(12) == 1)||(digitalRead(14) == 1)){
Serial.println('!');
}
else{
// send the value of analog input 0:
 dataCoeur=String(analogRead(0));
if(dataCoeur.length()==1)dataCoeur="000"+dataCoeur;
else if(dataCoeur.length()==2)dataCoeur="00"+dataCoeur;
else if(dataCoeur.length()==3)dataCoeur="0"+dataCoeur;

 dataCoeurArray+=dataCoeur;
 delay(10);
 
}}



  if (Firebase.ready() && (millis() - sendDataPrevMillis > 15000 || sendDataPrevMillis == 0))
  {
    sendDataPrevMillis = millis();

   Serial.printf("Set string... %s\n", Firebase.setString(fbdo, F(PATH), dataCoeurArray) ? "ok" : fbdo.errorReason().c_str());

    Serial.printf("Get string... %s\n", Firebase.getString(fbdo, F(PATH)) ? fbdo.to<const char *>() : fbdo.errorReason().c_str());
    Serial.println();


    count++;
  }
}
