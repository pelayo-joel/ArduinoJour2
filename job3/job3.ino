#include <LiquidCrystal.h>

// Initialisation de l'afficheur LCD
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  // Configuration de la vitesse de transmission de l'afficheur LCD
  lcd.begin(16, 2);

  // Chargement des caractères personnalisés dans l'afficheur LCD
  byte smiley[8] = {
    0b00000,
    0b01010,
    0b01010,
    0b00000,
    0b10001,
    0b10001,
    0b01110,
    0b00000
  };

  byte smiley1[8] = {
    0b00000,
    0b01010,
    0b01010,
    0b00000,
    0b00000,
    0b10001,
    0b01110,
    0b00000
  };

  byte smiley2[8] = {
    0b00000,
    0b01010,
    0b01010,
    0b00000,
    0b00000,
    0b01110,
    0b10001,
    0b00000
  };

  byte smiley3[8] = {
    0b00000,
    0b01010,
    0b01010,
    0b00000,
    0b10001,
    0b01110,
    0b00000,
    0b00000
  };

  lcd.createChar(0, smiley);
  lcd.createChar(1, smiley1);
  lcd.createChar(2, smiley2);
  lcd.createChar(3, smiley3);
}

void loop() {
  // Dessin du smiley sur l'afficheur LCD
  lcd.setCursor(5, 0);
  lcd.write(byte(0)); // Code pour le caractère personnalisé 0
  lcd.setCursor(6, 0);
  lcd.write(byte(1)); // Code pour le caractère personnalisé 1
  lcd.setCursor(5, 1);
  lcd.write(byte(2)); // Code pour le caractère personnalisé 2
  lcd.setCursor(6, 1);
  lcd.write(byte(3)); // Code pour le caractère personnalisé 3

  // Pause de 2 secondes avant de redessiner le smiley
  delay(2000);
}


