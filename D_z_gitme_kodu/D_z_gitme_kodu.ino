#include "Wire.h"
#include<Adafruit_INA219.h>
#include<EEPROM.h>
Adafruit_INA219 ina219;
float currentma = 0;
float referans = 1.5;
int hiz = 150;
int msolileri = 7 ,msolgeri = 8 ,msagileri = 13,msaggeri = 12;
int ena =3 ,enb = 6,enc = 9,ene = 10;
int basla = 0;
int go = false,yaz = false;
int kayitadresi = 0;
void setup() {
  // put your setup code here, to run once:
  ina219.begin();
  Serial.begin(9600);
  pinMode(msolileri,OUTPUT);
  pinMode(msolgeri,OUTPUT);
  pinMode(msagileri,OUTPUT);
  pinMode(msaggeri,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
  pinMode(enc,OUTPUT);
  pinMode(ene,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  basla = Serial.read();
  digitalWrite(msolileri,1);
  digitalWrite(msolgeri,0);
  digitalWrite(msagileri,1);
  digitalWrite(msaggeri,0);
  if(basla == 1){
    go = true;
  }
  if(basla == 0){
    go = false;
  }
  if (go==true){
    currentma = referans-(ina219.getCurrent_mA());
    yaz = true;
    EEPROM.write(kayitadresi,currentma*10);
    kayitadresi++;
    analogWrite(ena,hiz);
    analogWrite(enb,hiz);
    analogWrite(enc,hiz);
    analogWrite(ene,hiz);
  }
  if (go==false){
    if(yaz == true){
      Serial.println(kayitadresi);
    }
    analogWrite(ena,0);
    analogWrite(enb,0);
    analogWrite(enc,0);
    analogWrite(ene,0);
  }
}
