/*
アウトプットライブラリ_サーボ
サーボSG90を指定した通りに動かす
*/

#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);
  myServo.write(90);
}

void loop() {
  myServo.write(75);
  delay(100);
  myServo.write(105);
  delay(100);
  }
