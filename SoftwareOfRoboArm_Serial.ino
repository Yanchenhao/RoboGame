/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
  pinMode(9,OUTPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  //myservo.write(120);
}

char* Locc;
float numdata=0;
String comdata="";
int mark = 0;
void loop() {
    while (Serial.available() > 0)
  {
    comdata += char(Serial.read());
      //延时一会，让串口缓存准备好下一个数字，不延时会导致数据丢失，
    delay(2);
    //标记串口读过数据，如果没有数据的话，直接不执行这个while了。
    mark = 1;
  }
 if(mark == 1)  //如果接收到数据则执行comdata分析操作，否则什么都不做。
  {
/*******************下面是重点*******************/
//以串口读取字符串长度循环，
    for(int i = 0; i < comdata.length() ; i++)
    {
    //逐个分析comdata[i]字符串的文字，如果碰到文字是分隔符（这里选择逗号分割）则将结果数组位置下移一位
    //即比如11,22,33,55开始的11记到numdata[0];碰到逗号就j等于1了，
    //再转换就转换到numdata[1];再碰到逗号就记到numdata[2];以此类推，直到字符串结束
      if(comdata[i] == ',')
      {

      }
      else
      {
        numdata = numdata * 10 + (comdata[i] - '0');
      }
    }
    //numdata = (180.0/120.0)*numdata;
    //comdata的字符串已经全部转换到numdata了，清空comdata以便下一次使用，
    //如果不请空的话，本次结果极有可能干扰下一次。
    comdata = String("");
    //输出之后必须将读到数据的mark置0，不置0下次循环就不能使用了。
    //myservo.write(numdata);
    //numdata = map(numdata,0,180,500,2500);
    Serial.print(numdata);
    Serial.print("\n");
    numdata = map(numdata,0,120,0,180);
    myservo.write(numdata);

//    while(true){
//      digitalWrite(9,HIGH);
//      delayMicroseconds(numdata);
//      digitalWrite(9,LOW);
//      delayMicroseconds(20000-numdata);
//      if(Serial.available()>0){
//        break;
//      }
//    }
    

    
    //myservo.write(numdata);
    //delay(15);
    mark = 0;
    numdata = 0;
    
  }
  


}

