// Replace the values by the values obtained
const int dry = 480;
const int wet = 198;


void setup() {
 Serial.begin(9600);
}

void loop() {
  // MS calibration
  // A0 in this case because sensor is connected to the pin Analog 0
  int sensorVal = analogRead(A0);

  Serial.print(sensorVal);
  delay(100); 
}