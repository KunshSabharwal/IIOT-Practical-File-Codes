#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Use the correct I2C address (usually 0x27 or 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();           // Initialize the LCD
  lcd.backlight();      // Turn on the backlight
  lcd.setCursor(0, 1);
  lcd.print("LIGHT: ");
}

void loop() {
  int sensorValue = analogRead(A0);

  lcd.setCursor(0, 0);  // Move to top line before printing new text
  lcd.print("Room: ");
 
  if (sensorValue > 700) {
    lcd.print("Light!");
  } else {
    lcd.print("Dark  ");
  }

  delay(100);
}