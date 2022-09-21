float referans = 5.0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = analogRead(A2);
  float volt=(deger*referans)/1023*2;
  Serial.print("Okunan analog değer: ");
  Serial.println(deger);
  Serial.print("Voltaj: ");
  Serial.println(volt);
  delay(1000);
}
