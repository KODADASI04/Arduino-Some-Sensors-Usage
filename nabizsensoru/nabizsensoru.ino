#define USE_ARDUINO_INTERRUPTS true
#include<PulseSensorPlayground.h>
const int PulseWire = 0;
int Threshold = 510;
int nabiz;
PulseSensorPlayground pulseSensor;
void setup() {
  Serial.begin(9600);
  pulseSensor.analogInput(PulseWire);
  pulseSensor.setThreshold(Threshold);
  if(pulseSensor.begin()){
    Serial.println("Nabız Sensörü başladı");
  }
}

void loop() {
  if(pulseSensor.sawStartOfBeat()){
    
    nabiz = pulseSensor.getBeatsPerMinute();
    Serial.println("Nabiz algılandı");
    Serial.print("BPM: ");
    Serial.println(nabiz);
  }
  delay(20);
}
