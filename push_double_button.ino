#include <M5Stack.h>

#define NOTE_D0 -1
#define NOTE_D1 294
#define NOTE_D2 330
#define NOTE_D3 350
#define NOTE_D4 393
#define NOTE_D5 441
#define NOTE_D6 495
#define NOTE_D7 556

#define NOTE_DL1 147
#define NOTE_DL2 165
#define NOTE_DL3 175
#define NOTE_DL4 196
#define NOTE_DL5 221
#define NOTE_DL6 248
#define NOTE_DL7 278

#define NOTE_DH1 589
#define NOTE_DH2 661
#define NOTE_DH3 700
#define NOTE_DH4 786
#define NOTE_DH5 882
#define NOTE_DH6 990
#define NOTE_DH7 112

void setup() {
  // Initialize the M5Stack object
  M5.begin();
  
  M5.Lcd.printf("M5Stack Speaker test:\r\n");
}


void loop() {
  // put your main code here, to run repeatedly:
  boolean btnA = M5.BtnA.isPressed();
  boolean btnB = M5.BtnB.isPressed();
  boolean btnC = M5.BtnC.isPressed();
  
  if(btnA && btnB){
    M5.Lcd.println("isPressed A and B");
  }
  else if(btnA && btnC){
    M5.Lcd.println("isPressed A and C");
  }
  else if(btnA){
    M5.Lcd.println("isPressed A");
  }
  else if(btnB && btnC){
    M5.Lcd.println("isPressed B and C");
  }
  else if(btnB){
    M5.Lcd.println("isPressed B");
  }
  else if(btnC){
    M5.Lcd.println("isPressed C");
  }

  M5.update();
}
