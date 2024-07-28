#include <LiquidCrystal.h>

const int rs = 7, en = 1, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define LCD_CONTRAST_PIN 6


void setup() {

  analogWrite(LCD_CONTRAST_PIN, 115);
  lcd.begin(16, 2);
  lcd.print("Test");


}

void loop() {
  
}