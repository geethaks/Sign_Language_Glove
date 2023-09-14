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
  if((thumb==256) && (first_finger>=59 && first_finger<=95) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
    Serial.print("A");
  	delay(50);

  if((thumb>=74 && thumb<=124) && (first_finger==256) && (second_finger==256) && (third_finger==256) && (fourth_finger==256))
    Serial.print("B");
  	delay(50);
	
  if((thumb>=71 && thumb<=112) && (first_finger>=71 && first_finger<=112) && (second_finger>=71 && second_finger<=112) && (third_finger>=71 && third_finger<=112) && (fourth_finger>=71 && fourth_finger<=112))
    Serial.print("C");
  	delay(50);

if((thumb>=131 && thumb<=157) && (first_finger==256) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
    Serial.print("D");
  	delay(50);

  if((thumb>=71 && thumb<=112) && (first_finger>=59 && first_finger<=95) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
    Serial.print("E");
  	delay(50);

  if((thumb>=131 && thumb<=157) && (first_finger>=59 && first_finger<=95) && (second_finger==256) && (third_finger==256) && (fourth_finger==256))
      Serial.print("F");
      delay(50);

  if((thumb==256) && (first_finger==256) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
    Serial.print("G");
  	delay(50);

  if((thumb>=122 && thumb<=144) && (first_finger==256) && (second_finger==256) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
      Serial.print("H");
      delay(50);

  if((thumb>=131 && thumb<=157) && (first_finger>=59 && first_finger<=95) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger==256))
      Serial.print("I  or J");
      delay(50);

  if((thumb>=141 && thumb<=172) && (first_finger==256) && (second_finger==256) && (third_finger>=72 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
      Serial.print("K");
      delay(50);

  if((thumb>=70 && thumb<=80) && (first_finger==256) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
      Serial.print("L");
      delay(50);

  if((thumb>=59 && thumb<=95) && (first_finger>=59 && first_finger<=95) && (second_finger>=59 && second_finger<=95) && (third_finger>=70 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
      Serial.print("M");
      delay(50);
if((thumb>=71 && thumb<=112) && (first_finger>=59 && first_finger<=95) && (second_finger>=70&& second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
      Serial.print("N");
      delay(50);

  if((thumb>=131 && thumb<=157) && (first_finger>=71 && first_finger<=112) && (second_finger>=71 && second_finger<=112) && (third_finger>=71 && third_finger<=112) && (fourth_finger>=71 && fourth_finger<=112))
    Serial.print("O");
      delay(50);


  if((thumb>=141 && thumb<=172) && (first_finger==256) && (second_finger==256) && (third_finger==256) && (fourth_finger==256))
    Serial.print("P");
      delay(50);
if((thumb==256) && (first_finger==256) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))	

    Serial.print("Q");
      delay(50);

  if((thumb>=131 && thumb<=157) && (first_finger==256) && (second_finger==256) && (third_finger>=72 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))

    Serial.print("R ");
      Serial.print("      ");
      delay(50);
  if((thumb>=131 && thumb<=157) && (first_finger>=59 && first_finger<=95) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))

    Serial.print("S");
      delay(100);
  if ((thumb>=141 && thumb<=172) && (first_finger>=59 && first_finger<=95) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
    Serial.print("T");
      delay(50);

  if((thumb>=131 && thumb<=157) && (first_finger==256) && (second_finger==256) && (third_finger>=72 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
    Serial.print("U or V");
      delay(50);
  if((thumb>=131 && thumb<=157) && (first_finger==256) && (second_finger==256) && (third_finger==256) && (fourth_finger>=59 && fourth_finger<=95))
    Serial.print("W");
      delay(50);
  if((thumb>=59 && thumb<=95) && (first_finger>=80 && first_finger<=95) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
    Serial.print("X");
      delay(50);

if((thumb==256) && (first_finger>=59 && first_finger<=95) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger==256))
    Serial.print("Y");
      delay(50);
if((thumb>=131 && thumb<=157) && (first_finger==256) && (second_finger>=59 && second_finger<=95) && (third_finger>=59 && third_finger<=95) && (fourth_finger>=59 && fourth_finger<=95))
    Serial.print("Z");
      delay(50);
Serial.println();
}