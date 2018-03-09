#include <Arduino.h>

#define L_RGB_R 5 
#define L_RGB_G 11 
#define L_RGB_B 6 

#define L_R 12 
#define L_Y 13 
#define L_G 7 
#define L_B 8 

#define SW1 2 
#define SW2 3 
#define SW3 4 

#define PIEZO_A 9 
#define PIEZO_B 10 

#define POT1 A0 
#define POT2 A1 

#define PHOTO A2 

#define DHTPIN A3 
#define DHTTYPE DHT11 

#define S1 5 
#define S2 6 
#define S3 9 
#define S4 10 
#define S5 11

// komentář na řádek
/*
 víceřádkový komentář
 */

void setup() {
  pinMode(SW1, INPUT_PULLUP);
  pinMode(L_R, OUTPUT);
  pinMode(L_Y, OUTPUT);
  pinMode(L_G, OUTPUT);
}

void loop() {
  digitalWrite(L_R, HIGH); 
  delay(1000);
  digitalWrite(L_Y, HIGH); 
  delay(1000);
  digitalWrite(L_R, LOW);
  digitalWrite(L_Y, LOW);
  digitalWrite(L_G, HIGH); 
  delay(1000);
  digitalWrite(L_G, LOW);
  digitalWrite(L_Y, HIGH);  
  delay(1000);
  digitalWrite(L_Y, LOW);
}
