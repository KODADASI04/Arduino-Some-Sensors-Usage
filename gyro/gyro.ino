#include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h"
MPU6050 gyro;
int16_t ax,ay,az;//ivme değerleri
int16_t gx,gy,gz;//gyro değerleri
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
  Serial.println("I2C cihazlar başlatılıyor...");
  gyro.initialize();
  Serial.println("Test cihazı bağlantıları...");
  Serial.println(gyro.testConnection()? "MPU6050 bağlantı başarılı" : "MPU6050 bağlantısı başarısız");
}

void loop() {
  // put your main code here, to run repeatedly:
  gyro.getMotion6(&ax,&ay,&az,&gx,&gy,&gz);
  Serial.print(ax);
  Serial.print("\t");
  Serial.print(ay);
  Serial.print("\t");
  Serial.print(az);
  Serial.print("\t");
  Serial.print(gx);
  Serial.print("\t");
  Serial.print(gy);
  Serial.print("\t");
  Serial.println(gz);
}
