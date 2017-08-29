
int stat = 0;//表示电机此时的位置，0表示初始化，1表示状态“1”，2表示状态“2”


void setup() {
  pinMode(2, INPUT); //此端口接收上位机的信号
  pinMode(3, INPUT); //此端口接收对射式红外传感器的信息
  //====================================
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT); //4号和5号引脚负责传送电位信息给L298N
  delay(10000);

}
void switchToStatus1(void) {
  if (stat == 1) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    return;
  }
  else {
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(500);
    while (digitalRead(3) == HIGH) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
    }
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    stat = 1;
  }

}
void switchToStatus2(void) {
  if (stat == 2) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    return;
  }
  else {
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    while (digitalRead(3) == HIGH) {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
    }
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    stat = 2;
  }
}





void loop() {
  //当上位机给予高电位信号的时候出发“交换动作”
  if (digitalRead(2) == HIGH) {
    //切换到交换状态“1”
    switchToStatus1();
    //stat = 1;
  }
  else {
    //切换到交换状态“2”
    switchToStatus2();
    //stat = 2;
  }

}


