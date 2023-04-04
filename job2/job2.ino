#include <LiquidCrystal.h>

// Initialisation de l'afficheur LCD
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  // Configuration de la vitesse de transmission de l'afficheur LCD
  lcd.begin(16, 2);

  // Affichage du texte sur l'afficheur LCD
  lcd.print("Tension: ");
}

void loop() {
  // Lecture de la valeur de tension sur l'entrée analogique A0
  int val = analogRead(A0);

  // Conversion de la valeur numérique en tension
  float voltage = val * (5.0 / 1023.0); // Conversion 10 bits, plage de tension 0-5V

  // Affichage de la valeur de tension sur l'afficheur LCD
  lcd.setCursor(2, 0);
  lcd.print(voltage, 2); // Affiche 2 décimales
  lcd.print(" V");

  // Pause de 1 seconde avant la prochaine lecture
  delay(1000);
}




