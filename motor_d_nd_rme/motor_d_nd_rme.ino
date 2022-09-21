int msolileri = 4 ,msolgeri = 3 ,msaggeri = 11,msagileri = 12;
int ena =9 ,enb = 10,enc = 5,ene = 6;
int hiz = 150;
void setup() {
  // put your setup code here, to run once:
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
  digitalWrite(msolileri,1);
  digitalWrite(msolgeri,0);
  digitalWrite(msaggeri,0);
  digitalWrite(msagileri,1);
  analogWrite(ena,hiz);
  analogWrite(enb,hiz);
  analogWrite(enc,hiz);
  analogWrite(ene,hiz);
}
