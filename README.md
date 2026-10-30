# Arduino Smart-Home Beleuchtungssteuerung

Ein praxisnahes Projekt aus dem Bereich der Gebäudeautomation zur automatisierten Schaltung von Beleuchtungsanlagen.

## Funktionsweise

Das System überwacht kontinuierlich das Umgebungslicht über einen Fotowiderstand (LDR):
* **Helligkeit ausreichend:** Relais bleibt deaktiviert (Beleuchtung aus).
* **Dämmerung/Dunkelheit unterschreitet Schwellenwert:** Relais schaltet den Laststromkreis aktiv (Beleuchtung an).
* Statuswerte werden parallel über die serielle Schnittstelle (9600 Baud) zur Überwachung ausgegeben.

## Hardware-Komponenten

* Arduino Uno / Nano (ATmega328P)
* Fotowiderstand (LDR) mit 10k-Ohm Vorwiderstand (Spannungsteiler)
* 5V-Relaismodul zur Schaltung der Beleuchtung
* Steckplatine und Jumper-Kabel
