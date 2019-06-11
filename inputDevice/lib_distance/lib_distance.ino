/*
インプットライブラリ_測距センサー
測距センサーGP2Y0A21YKからのアナログ入力値を温度に変換しシリアルモニタに表示する
*/

const int distanceSensorPin = A0;    // アナログ入力ピン（定数）
const float Vcc = 5.0;         // 電源電圧（定数）
int   ad;                      // センサー取得値（変数）
float dist;                    // 距離（変数）

void setup(){
  Serial.begin(9600);         // シリアルモニタを開始
}

void loop(){
  ad = analogRead(distanceSensorPin);   // センサーからのアナログ値を取得
  dist = Vcc * ad / 1023;  
  dist = 26.549 * pow(dist, -1.2091);   // 距離を計算
  Serial.print("センサー取得値 = ");
  Serial.print(ad);
  Serial.print(" , ");
  Serial.print("距離 = ");
  Serial.print(dist);
  Serial.println(" cm");
  delay(1000);
}
