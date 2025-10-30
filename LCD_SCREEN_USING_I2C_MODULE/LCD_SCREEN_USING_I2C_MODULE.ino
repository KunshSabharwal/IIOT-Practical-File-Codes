#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD I2C address (often 0x27 or 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();            // Initialize the LCD
  lcd.backlight();       // Turn on backlight
  lcd.print("Hello, World!");
}

void loop() {
  // Nothing here for now
}
