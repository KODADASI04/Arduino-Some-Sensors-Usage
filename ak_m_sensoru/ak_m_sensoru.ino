#include<Adafruit_INA219.h>
#include<Wire.h>
Adafruit_INA219 ina219;
float shuntvoltage = 0,busvoltage = 0,currentma = 0,loadvoltage = 0;
void setup() {
  // put your setup code here, to run once:
  uint32_t currentFrequency;
  Serial.begin(9600);
  ina219.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  shuntvoltage = ina219.getShuntVoltage_mV();
  busvoltage = ina219.getBusVoltage_V();
  currentma = ina219.getCurrent_mA();
  loadvoltage = busvoltage+(shuntvoltage/1000);
  Serial.print(shuntvoltage);
  Serial.print("\t");
  Serial.print(busvoltage);
  Serial.print("\t");
  Serial.print(loadvoltage);
  Serial.print("\t");
  Serial.println(currentma);
}
