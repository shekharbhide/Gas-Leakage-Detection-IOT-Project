#include "LiquidCrystal.h"
LiquidCrystal lcd(9,8,7,6,5,4);

int GAS_VAL = 0;

void setup()
{
  pinMode(A0, INPUT); // MQ-6 A0 Pin
  Serial.begin(9600);
  pinMode(11,OUTPUT); // Buzzer 
 
}

void loop()
{
  GAS_VAL = analogRead(A0);
  Serial.println(GAS_VAL);

  if (GAS_VAL > 400)
  {
    Serial.println("LPG Detected::");
    digitalWrite(11,HIGH);
  }
 
  else
  {
    Serial.println("LPG Not Detected::");
    digitalWrite(11,LOW);
  }
  delay(1500);
}