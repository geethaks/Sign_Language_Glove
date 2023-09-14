int thumb=0;
int first_finger=0;
int second_finger=0;
int third_finger=0;
int fourth_finger=0;
#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup(){
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
}
void loop(){
  int thumb=analogRead(A0);
  int first_finger=analogRead(A1);
  int second_finger=analogRead(A2);
  int third_finger=analogRead(A3);
  int fourth_finger=analogRead(A4);
  if((thumb==33) && (first_finger>=6 && first_finger<=11) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("A");
    delay(50);

  if((thumb>=17 && thumb<=15) && (first_finger==33) && (second_finger==33) && (third_finger==33) && (fourth_finger==33))
    Serial.print("B");
    delay(50);
  
  if((thumb>=61 && thumb<=14) && (first_finger>=6 && first_finger<=14) && (second_finger>=6 && second_finger<=14) && (third_finger>=6 && third_finger<=14) && (fourth_finger>=6 && fourth_finger<=14))
    Serial.print("C");
    delay(50);

 if((thumb>=11 && thumb<=14) && (first_finger==33) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("D");
    delay(50);

  if((thumb>=6 && thumb<=12) && (first_finger>=6 && first_finger<=11) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("E");
    delay(50);

  if((thumb>=11 && thumb<=14) && (first_finger>=6 && first_finger<=11) && (second_finger==33) && (third_finger==33) && (fourth_finger==33))
      Serial.print("F");
      delay(50);

  if((thumb==33) && (first_finger==33) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("G");
    delay(50);

  if((thumb>=14 && thumb<=20) && (first_finger==33) && (second_finger==33) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
      Serial.print("H");
      delay(50);

  if((thumb>=11 && thumb<=14) && (first_finger>=6 && first_finger<=11) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger==33))
      Serial.print("I  or J");
      delay(50);

  if((thumb>=14 && thumb<=19) && (first_finger==33) && (second_finger==33) && (third_finger>=6 && third_finger<=13) && (fourth_finger>=6 && fourth_finger<=11))
      Serial.print("K");
      delay(50);

  if((thumb>=7 && thumb<=11) && (first_finger==33) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
      Serial.print("L");
      delay(50);

  if((thumb>=6 && thumb<=11) && (first_finger>=6 && first_finger<=11) && (second_finger>=6 && second_finger<=11) && (third_finger>=8 && third_finger<=12) && (fourth_finger>=6 && fourth_finger<=11))
      Serial.print("M");
      delay(50);
  if((thumb>=9 && thumb<=15) && (first_finger>=6 && first_finger<=11) && (second_finger>=6&& second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
      Serial.print("N");
      delay(50);

  if((thumb>=11 && thumb<=14) && (first_finger>=9 && first_finger<=15) && (second_finger>=9 && second_finger<=15) && (third_finger>=9 && third_finger<=15) && (fourth_finger>=9 && fourth_finger<=15))
    Serial.print("O");
    delay(50);


  if((thumb>=7 && thumb<=13) && (first_finger>=7 && first_finger<=11) && (second_finger>=9 && second_finger<=14) && (third_finger>=9 && third_finger<=14) && (fourth_finger>=9 && fourth_finger<=14))
    Serial.print("P");
    delay(50);
 if((thumb>=9 && thumb<=14) && (first_finger>=9 && first_finger<=14) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("Q");
    delay(50);

  if((thumb>=17 && thumb<=21) && (first_finger>=7 && first_finger<=21) && (second_finger==33) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))

    Serial.print("R");
    delay(50);
    
  if((thumb>=11 && thumb<=14) && (first_finger>=6 && first_finger<=11) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("S");
    delay(50);
    
  if ((thumb>=25 && thumb<=33) && (first_finger>=15 && first_finger<=20) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("T");
      delay(50);

  if((thumb>=17 && thumb<=21) && (first_finger==33) && (second_finger>=25 && second_finger<=33) && (third_finger>=7 && third_finger<=13) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("U");
      delay(50);

  if((thumb>=17 && thumb<=21) && (first_finger>=18 && first_finger<=21) && (second_finger==33) && (third_finger>=7 && third_finger<=13) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("V");
      delay(50);
      
  if((thumb>=17 && thumb<=21) && (first_finger>=18 && first_finger<=21) && (second_finger==33) && (third_finger>=18 && third_finger<=21) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("W");
      delay(50);
  if((thumb>=8 && thumb<=12) && (first_finger>=9 && first_finger<=14) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("X");
      delay(50);

 if((thumb>=17 && thumb<=21) && (first_finger>=6 && first_finger<=11) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger==33))
    Serial.print("Y");
      delay(50);
if((thumb>=17 && thumb<=21) && (first_finger==33) && (second_finger>=6 && second_finger<=11) && (third_finger>=6 && third_finger<=11) && (fourth_finger>=6 && fourth_finger<=11))
    Serial.print("Z");
      delay(50);
Serial.println();
}
