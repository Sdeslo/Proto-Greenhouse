const int dry = 480;
const int wet = 198;


void setup() {
 Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(A0);
  int percentageHumidity = map(sensorVal, wet, dry, 100, 0);

  Serial.print(percentageHumidity);
  Serial.println("%");
  
  delay(100); 
}
