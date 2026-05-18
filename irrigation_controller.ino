#include <LiquidCrystal.h>
// LCD pinlərini təyin edirik: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int potPin = A0;   // Nəmlik potensiometri
const int ldrPin = A1;   // İşıq sensoru (LDR)
const int relayPin = 6;  // Releni idarə edən tranzistor pini
const int buzzerPin = 10; // Piezo zəng (həyəcan)
void setup() {
  lcd.begin(16, 2);
  pinMode(relayPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);    // Debug üçün
  lcd.print("System Activates");
  delay(1500);
  lcd.clear();
}
void loop() {
  int sensorValue = analogRead(potPin);
  int moisturePercent = map(sensorValue, 0, 1023, 0, 100);
  int lightPercent = map(analogRead(ldrPin), 0, 1023, 0, 100);

  // ---- DEBUG: rəqəmləri Serial Monitor-a yaz ----
  Serial.print("Moisture: ");
  Serial.print(moisturePercent);
  Serial.print("%   Light: ");
  Serial.print(lightPercent);
  Serial.println("%");
  // -----------------------------------------------

  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.print(moisturePercent);
  lcd.print("%   ");

  lcd.setCursor(0, 1);
  if (lightPercent > 50) {
    digitalWrite(relayPin, LOW);
    lcd.print("Sun up: No water");
  }
  else {
    if (moisturePercent < 40) {
      digitalWrite(relayPin, HIGH);
      lcd.print("Status: Pump ON ");
    }
    else if (moisturePercent > 70) {
      digitalWrite(relayPin, LOW);
      lcd.print("Status: Pump OFF");
    }
    else {
      if (digitalRead(relayPin) == HIGH) lcd.print("Status: Pump ON ");
      else                                lcd.print("Status: Pump OFF");
    }
  }
  if (moisturePercent < 20) {
    tone(buzzerPin, 1000);
  } else {
    noTone(buzzerPin);
  }
  delay(200);
}
