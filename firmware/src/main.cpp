#include <Arduino.h>

const int ENA = 9;
const int ENB = 6;

const int IN1 = 12;
const int IN2 = 11;
const int IN3 = 7;
const int IN4 = 8;

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 200);
  analogWrite(ENB, 200);
  delay(1000);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  delay(3000);
}

void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, 200);
  analogWrite(ENB, 200);
  delay(1000);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  delay(3000);
}

void left() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 200);
  analogWrite(ENB, 100);
  delay(1000);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  delay(3000);
}

void right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 100);
  analogWrite(ENB, 200);
  delay(1000);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  delay(3000);
}


void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  
}

void loop() {
  forward();
}
