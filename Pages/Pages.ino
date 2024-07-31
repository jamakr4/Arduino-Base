#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define LCD_CONTRAST_PIN 6

const int button = 8;
int page = 0;
int buttonState = 0;
int lastButtonState = 0;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  analogWrite(LCD_CONTRAST_PIN, 100);
  lcd.begin(16, 2);
  lcd.print("Page: 0");

  pinMode(button, INPUT);
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  int reading = digitalRead(button);

  // Check if the button state has changed
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  // Check if the button is stable for debounceDelay
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;

      // Increment page number on button press
      if (buttonState == HIGH) {
        page = (page + 1) % 10;  // Limit the page number to 0-9 for this example
        Serial.println(page);

        // Update the LCD display
        lcd.clear();
        lcd.print("Page: ");
        lcd.print(page);
      }
    }
  }

  lastButtonState = reading;
}
