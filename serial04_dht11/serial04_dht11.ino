#include <Arduino.h>

#include "DHT.h"

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

// nahoru pridat: #include "DHT.h"
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  dht.begin();
}

void loop() {   
  Serial.print("Teplota: ");
  Serial.print(dht.readTemperature());
  Serial.print("   Vlhkost: ");
  Serial.println(dht.readHumidity());
  delay(100);  
}
