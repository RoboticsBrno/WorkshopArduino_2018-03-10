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

void setup() {
  pinMode(SW1, INPUT_PULLUP);
  Serial.begin(9600); // 9600 = komunikační rychlost bit/s
  Serial.println("Ahoj, jak vas bavi workshop?");
  Serial.print("Hodne ");
  Serial.print("Ahoj svete"); 
}

void loop() {   
  Serial.print("POT1: ");
  Serial.print(analogRead(POT1));
  Serial.print("   POT2: ");
  Serial.print(analogRead(POT2));
  Serial.print("   PHOTO: ");
  Serial.print(analogRead(PHOTO));
  Serial.print("   POT1(D): ");
  Serial.print(digitalRead(POT1));
  Serial.print("   SW1: ");
  Serial.print(digitalRead(SW1));
  Serial.println("   ");
  delay(100);  
}
