/*
 * Gebäudeautomation: Automatische Beleuchtungssteuerung
 * Tymofii Lata
 */

const int ldrPin = A0;      // Analoger Eingang fuer den Helligkeitssensor (LDR)
const int relayPin = 8;     // Digitaler Ausgang fuer das Relais (Lichtsteuerung)
const int threshold = 500;  // Schwellenwert fuer die Daemmerung

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Standardmaessig aus
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(ldrPin);

  Serial.print("Sensorwert: ");
  Serial.println(sensorValue);

  // Automatisches Schalten bei Dunkelheit
  if (sensorValue < threshold) {
    digitalWrite(relayPin, HIGH); // Licht ein
  } else {
    digitalWrite(relayPin, LOW);  // Licht aus
  }

  delay(1000); // 1 Sekunde Pause bis zur naechsten Messung
}
