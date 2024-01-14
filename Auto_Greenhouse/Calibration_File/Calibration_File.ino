const int dry = 480;
const int wet = 198;


void setup() {
 Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(A0);

  Serial.print(sensorVal);
  delay(100); 
}