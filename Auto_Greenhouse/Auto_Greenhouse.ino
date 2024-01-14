#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);

//Variables for moisture sensors
const int dry = 480;
const int wet = 198;


void setup() {
 Serial.begin(9600);

 lcd.init();
 lcd.backlight();
}

void loop() {
  //soil moisture
  int MS_Val = analogRead(A0);
  int percentageHumidity = map(MS_Val, wet, dry, 100, 0);
  Serial.print(percentageHumidity);
  Serial.println("%");
  lcd.setCursor(0, 0);
  lcd.print("Moisture:");
  lcd.print(percentageHumidity);
  lcd.print("%");
  delay(100); 
}
