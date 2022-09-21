int egimsayi = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (analogRead(A1)-analogRead(A0)>20){//önde eğim olup olmadığını anlamak için
    while(analogRead(A1)-analogRead(A0)>20){
      egimsayi+=1;
      if (egimsayi >= 5){
        Serial.print("Eğim var");
        Serial.print("\t");
        Serial.println(analogRead(A1)-analogRead(A0));
      }
      
    }
    Serial.println("Eğim var");
    egimsayi = 0;
   }
 else{
  Serial.print("Eğim Yok");
  Serial.print("\t");
  Serial.println(analogRead(A1)-analogRead(A0));
 }
 delay(100);
}
