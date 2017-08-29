#include <Servo.h>

Servo S1;
Servo S2;
//                  | 1号舵机   |  二号舵机
//   接舵机控制线   |  D7       |  D8
//   接外部输入     |  D2       |  D3
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  S1.attach(7);
  S2.attach(9);
}

void loop() {
  if(digitalRead(2) == HIGH){
    S1.write(0);//爪子闭合
  }
  else{
    S1.write(map(70,0,120,0,180));//爪子张开
  }
  if(digitalRead(4) == HIGH){
    S2.write(map(70,0,120,0,180));//爪子闭合
  }
  else{
    S2.write(0);//爪子张开
  }

}
