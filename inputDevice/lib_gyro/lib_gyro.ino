/*
インプットライブラリ_ジャイロセンサー
小型圧電振動ジャイロモジュール（ジャイロスター I-02759）からのデータ取得
*/

#define  AXISXPIN  (0)
#define AXISYPIN  (1)
#define AXISZPIN  (2)

#ifndef M_PI
#define M_PI  (3.1415926535897932384626433832795)
#endif

void setup()
{
  // ボーレートを指定して通信開始
  Serial.begin(9600);
}

double Map( int iIn, int iIn1, int iIn2, double dOut1, double dOut2, boolean bConstrain = false )
{
  double dValue = (iIn - iIn1) * (dOut2 - dOut1) / (iIn2 - iIn1) + dOut1;
  if( bConstrain )
  {
    double dOutMin, dOutMax;
    if( dOut1 < dOut2 )
    {
      dOutMin= dOut1;
      dOutMax= dOut2;
    }
    else
    {
      dOutMin= dOut2;
      dOutMax= dOut1;
    }
    if( dOutMin > dValue )
    {
      return dOutMin;
    }
    if( dOutMax < dValue )
    {
      return dOutMax;
    }
  }
  return dValue;
}


void loop()
{
  // ピン値の読み取り
  int iValueX = analogRead(AXISXPIN);
  int iValueY = analogRead(AXISYPIN);
  int iValueZ = analogRead(AXISZPIN);
  
  // ピン値の出力
  Serial.print( "Value : " );
  Serial.print( iValueX );
  Serial.print( ", " );
  Serial.print( iValueY );
  Serial.print( ", " );
  Serial.print( iValueZ );
  Serial.print( "\n" );
  
  // ピン値をsinθ値に変換（第２、第３引数は各軸の-90度、90度における値を使用する）
  double dSinX = Map( iValueX, 301, 721, -1.0, 1.0, true );
  double dSinY = Map( iValueY, 308, 736, -1.0, 1.0, true );
  double dSinZ = Map( iValueZ, 379, 775, -1.0, 1.0, true );

  double dAngleX = asin(dSinX) * 180.0 / M_PI;
  double dAngleY = asin(dSinY) * 180.0 / M_PI;
  double dAngleZ = asin(dSinZ) * 180.0 / M_PI;
  
  // 角度の出力
  Serial.print( "Angle[deg] : " );
  Serial.print( dAngleX );
  Serial.print( ", " );
  Serial.print( dAngleY );
  Serial.print( ", " );
  Serial.print( dAngleZ );
  Serial.print( "\n" );
  Serial.print( "\n" );

  delay( 1000 );
}
