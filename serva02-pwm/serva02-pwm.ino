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

#include <Servo.h> 

Servo myservo;

void setup() {
  Serial.begin(9600);
  pinMode(L_RGB_R, OUTPUT);
  pinMode(L_RGB_G, OUTPUT);
  
  Serial.println("Start ServoTest");
  //myservo.attach(S5);
  Serial.println("ServoTest - attach");
  //myservo.write(90);
  Serial.println("ServoTest - write");
  //delay(1000);
  Serial.println("ServoTest - continue");
}

void loop() {   
  Serial.println(analogRead(PHOTO)); // 0 - 1023
  //myservo.write(analogRead(PHOTO)*0.175); // write(0 - 180)
  //analogWrite(L_RGB_R, analogRead(PHOTO)/4); // analogWrite 0 - 255
  analogWrite(L_RGB_G, analogRead(PHOTO)/4); // analogWrite 0 - 255  delay(100);
}
