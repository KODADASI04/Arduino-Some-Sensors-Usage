#include<SoftwareSerial.h>
SoftwareSerial mySerial(10,11); // RX,TX
String isim = "Arduino UNO";
int sifre = 1234;
String uart = "9600,0,0";

void setup()
{
Serial.begin(9600);
Serial.println("HC-05 Modul Ayarlaniyor...");
Serial.println("Lutfen 5 sn icinde HC-05 modulun uzerindeki butona basili tutarak baglanti yapiniz.");
delay(5000);
/*mySerial.begin(38400);
mySerial.print("AT+NAME=");
mySerial.println(isim);
Serial.print("Isim ayarlandi: ");
Serial.println(isim);
delay(1000);
mySerial.print("AT+PSWD=");
mySerial.println(sifre);
Serial.print("Sifre ayarlandi: ");
Serial.println(sifre);
delay(1000);
mySerial.print("AT+UART=");
mySerial.println(uart);
Serial.print("Baud rate ayarlandi: ");
Serial.println(uart);
delay(1000);*/
mySerial.print("AT+ROLE=1");
Serial.println("Role 1 oldu");
delay(2000);
Serial.println("Islem tamamlandi.");

}

void loop()
{

}
