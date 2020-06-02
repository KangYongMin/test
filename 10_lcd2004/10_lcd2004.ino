#include <LiquidCrystal.h>

LiquidCrystal lcd(16,17,23,25,27,29);

#define LCD_GREEN_LED  13

#define trig   8 
#define echo   9

#define INPUT_SW_0   40
#define INPUT_SW_1   44
#define INPUT_SW_2   42
#define INPUT_SW_3   46

void setup() {
    pinMode(LCD_GREEN_LED, OUTPUT);
    
    pinMode(trig, OUTPUT); 
    pinMode(echo, INPUT); 

    pinMode(INPUT_SW_0, INPUT); 
    pinMode(INPUT_SW_1, INPUT); 
    pinMode(INPUT_SW_2, INPUT); 
    pinMode(INPUT_SW_3, INPUT);     
    
  lcd.begin(20,4);
  lcd.setCursor(5,3);
  lcd.print("hello, Kang");
}

    
void loop() {
 
  lcd.setCursor(10,2);
  lcd.print(analogRead(A0));

  digitalWrite(LCD_GREEN_LED, HIGH);   
  delay(100);
  digitalWrite(LCD_GREEN_LED, LOW);   

  
  //gitalWrite(trig , LOW);
  //delayMicroseconds(2);
  //digitalWrite(trig , HIGH);
  //delayMicroseconds(10);
  //digitalWrite(trig , LOW);

  long distance = pulseIn(echo, HIGH) / 58.2 ;
  
  lcd.setCursor(2,3);
  lcd.print("    ");
  lcd.setCursor(2,3);
  lcd.print(distance);
  lcd.print(" mcm   ");





}
