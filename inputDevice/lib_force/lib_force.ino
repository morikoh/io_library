/*
インプットライブラリ_圧力センサー
圧力センサーからのアナログ入力値を荷重値に変換しシリアルモニタに表示する
*/

float R1 = 5.1;

void setup(){
  Serial.begin(9600);  // シリアル通信速度
}

void loop(){
  // 変数の宣言
  double Vo, Rf, fg;
  int aIn = analogRead(1);
  // アナログ入力値から出力電圧を計算
  Vo = aIn * 5.0 / 1024;
  // 出力電圧からFRSの抵抗値を計算
  Rf = R1*Vo / (5.0 - Vo);
  // FRSの抵抗値から圧力センサの荷重を計算
  fg = 880.79/Rf + 47.96;
  // 荷重データをシリアル通信で送る
  Serial.println(fg);
  delay(1000);
}
