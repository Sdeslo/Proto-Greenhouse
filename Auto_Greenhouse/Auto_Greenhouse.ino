#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

// Variables for moisture sensors
const int dry = 482;
const int wet = 198;

// Variables for water pump
const int relayPin = 7;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Variables for moisture sensors
  const int MS_Val = analogRead(A0);
  const int percentageHumidity = map(MS_Val, wet, dry, 100, 0);

  // Variables for water level
  const int WL_Val = digitalRead(D8);

  // Soil moisture
  lcd.setCursor(0, 0);
  lcd.print("Moisture:");
  lcd.setCursor(0, 1);
  lcd.print(percentageHumidity);
  lcd.setCursor(2, 1);
  lcd.print("%");

  // Water level sensor
  lcd.setCursor(0, 2);
  if (WL_Val == LOW)
  {
    lcd.print("Low Water");
  }

  // Relay Activation
  if (percentageHumidity < 10)
  {
    digitalWrite(relayPin, HIGH);
    lcd.setCursor(12, 0);
    lcd.print("Pump ON");
  }

  delay(2000);
  lcd.clear();
}
