#include<EEPROM.h>
int kayitadresi = 0;
float veri = 0.5;
int okumaadresi = 0;
float okunacakveri;
bool deger = true;
bool yaz = true;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(okumaadresi<=8873){
      okunacakveri = EEPROM.read(okumaadresi);
      okunacakveri = okunacakveri/10;
      Serial.println(okunacakveri);
      okumaadresi++;
    }
}
