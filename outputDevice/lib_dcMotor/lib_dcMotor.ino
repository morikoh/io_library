/*
アウトプットライブラリ_DCモーター
DCモーターの回転を制御する
*/

// モーター制御のピン設定
const int motorA = 12; 
const int motorB = 13; 
const int PWM_motor = 11; 

void setup(){
  pinMode(motorA,OUTPUT); //モーター信号用ピン
  pinMode(motorB,OUTPUT); //モーター信号用ピン
}

void loop(){
    digitalWrite(motorA,HIGH);
    digitalWrite(motorB,LOW);
    analogWrite(PWM_motor,100); 
    delay(3000);
    digitalWrite(motorA,LOW);
    digitalWrite(motorB,HIGH);
    analogWrite(PWM_motor,100); 
    delay(1000);
}
