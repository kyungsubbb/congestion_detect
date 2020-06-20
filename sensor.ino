#include <LiquidCrystal_I2C.h>     //LiquidCrystal 라이브러리 추가 
LiquidCrystal_I2C lcd(0x27, 16, 2);  //lcd 객체 선언

int count1=0;
int token = 0;
void setup() {
  Serial.begin(9600);
  
  // 적외선 장애물 감지 센서 핀을 INPUT으로 설정합니다.
  pinMode(5, INPUT);
  pinMode(6, INPUT);

  // LED 핀을 OUTPUT으로 설정합니다.
 // pinMode(7, OUTPUT);
  //pinMode(8, OUTPUT);
  lcd.begin();
  lcd.setCursor(2, 0);
  lcd.print("Bundang-Line");
  lcd.setCursor(5, 1);
  lcd.print("Empty");
  // 적외선 장애물 감지 센서의 상태를 확인하기 위하여 시리얼 통신의 속도를 설정합니다.
  
}

// setup() 함수가 호출된 이후, loop() 함수가 호출되며,
// 블록 안의 코드를 무한히 반복 실행됩니다.
void loop() {
  // 적외선 감지 센서 부터 센서값을 읽습니다.
  // 감지되면 0, 감지되지 않으면 1이 나옵니다.
  int state1 = digitalRead(5);
  int state2 = digitalRead(6);
  
  if((state1^state2)==1){
    
    if(state1 == 0){
    count1 ++;
    Serial.println(count1); 
    delay(200);  
    }
    else if(state2 == 0){    
    count1 --;
    if(count1 <0){
    count1 = 0;
  }
    Serial.println(count1);
    delay(200);
    }    
  
  }

    if(count1>3){
      lcd.begin();
      lcd.setCursor(2, 0);
      lcd.print("Bundang-Line");
      lcd.setCursor(4, 1);
      lcd.print("Crowded");
      delay(10);
    }
    else{
      lcd.begin();
      lcd.setCursor(2, 0);
      lcd.print("Bundang-Line");
      lcd.setCursor(5, 1);
      lcd.print("Empty");
      delay(10);
    }

  }
  

  
