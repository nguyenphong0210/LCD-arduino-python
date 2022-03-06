#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5,4,3,2);

const int ledPin = 13; 
int serialByte;
String string;

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("trang thai!");
}

void loop()
{
  while (Serial.available())
  {
    string = Serial.readString();
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(string); 
  }
}
