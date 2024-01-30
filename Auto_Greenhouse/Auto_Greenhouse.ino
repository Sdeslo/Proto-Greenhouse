#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);

//Variables for moisture sensors
const int dry = 482;
const int wet = 198;
int MS_Val = analogRead(A0);
int percentageHumidity = map(MS_Val, wet, dry, 100, 0);

//Variables for water level
in WL_VAL = digitalRead(D8)

void setup() {
 Serial.begin(9600);

 lcd.init();
 lcd.backlight();
}

void loop() {
  //soil moisture
  lcd.setCursor(0, 0);
  lcd.print("Moisture:");
  lcd.setCursor(0, 1);
  lcd.print(percentageHumidity);
  lcd.setCursor(2, 1);
  lcd.print("%");

  //Water level sensor
  lcd.setCursor(0, 2);
  if (WL_Val == LOW) {
    lcd. print("Low")
  }
  
  delay(1000); 
  lcd.clear();
}