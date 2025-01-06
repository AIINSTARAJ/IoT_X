#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;

void setup() { 
    lcd.begin(16, 2);
    pinMode(switchPin,INPUT);
}

void loop() {
    switchState = digitalRead(switchPin);
    if (switchState == "LOW"){
        lcd.print("A.I Instaraj 🎫🎫")
    }
    else{
        lcd.clear()
        lcd.print("Baddest Guy💎")
    }
