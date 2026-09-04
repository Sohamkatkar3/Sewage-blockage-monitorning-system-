#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <TinyGPS++.h>

LiquidCrystal_I2C lcd(0x27,16,2);
TinyGPSPlus gps;
HardwareSerial GPS(1),GSM(2);

#define T 5
#define E 18
#define G 34

bool f=0;

void sms(String m){
 GSM.println("AT+CMGF=1");
 GSM.println("AT+CMGS=\"+917249751625\"");
 GSM.print(m);
 GSM.write(26);
 delay(2000);
}

void setup(){
 pinMode(T,OUTPUT); pinMode(E,INPUT);
 lcd.init(); lcd.backlight();
 GPS.begin(9600,16,17);
 GSM.begin(9600,27,26);
}

void loop(){
 digitalWrite(T,0); delayMicroseconds(2);
 digitalWrite(T,1); delayMicroseconds(10);
 digitalWrite(T,0);

 float d=pulseIn(E,1)*0.034/2;
 int g=analogRead(G);

 while(GPS.available()) gps.encode(GPS.read());

 lcd.clear();
 lcd.print(d<15?"B":g>2000?"G":"O");

 if(d>15&&g<2000) f=0;

 if((d<15||g>2000)&&!f){
  String m="ALERT\n";
  if(d<15)m+="B\n";
  if(g>2000)m+="G\n";
  if(gps.location.isValid())
   m+="http://maps.google.com/?q="+String(gps.location.lat(),6)+","+String(gps.location.lng(),6);
  sms(m); f=1;
 }

 delay(2000);
}
