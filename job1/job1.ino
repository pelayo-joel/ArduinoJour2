#include <LiquidCrystal.h>

// Crée un objet LCD. Paramètres: (RS, E, D4, D5, D6, D7):
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  // Spécifiez le nombre de colonnes et de lignes de l’écran LCD. Passez à (20, 4) pour un écran LCD 20×4:
  lcd.begin(16, 2);
}

void loop() {
  // Déplacez le curseur sur la troisième colonne et la première ligne, le comptage commence à 0:
  lcd.setCursor(2, 0);
  // Imprimez la chaîne 'Hello World!':
  lcd.print("Hello World!");
  // Déplacez le curseur sur la troisième colonne et la deuxième ligne:
  lcd.setCursor(2, 1);
  // Imprimez la chaîne 'LCD tutorial':
  lcd.print("j'ai reussi");
}



