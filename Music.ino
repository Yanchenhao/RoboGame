
#define T 500

int src[11] = {0, 262, 294, 330, 349, 392, 440, 494, 523, 587, 659};
//         None, 1 , 2 , 3 , 4 , 5 , 6 , 7 , 1+, 2+, 3+

void push(int m, float t) {
  if(m == 0){
    delay(T*t);
    return;
  }
  c = 1.0 / src[m] * 1000000 - 100;
  for (int i = 0; i <= 1.0 * T * t; i += 1.0 * (c + 100) / 1000) {
    digitalWrite(2, HIGH);
    delayMicroseconds(100);
    digitalWrite(2, LOW);
    delayMicroseconds(c);
  }


}



void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  push(0,1);
  push(0,1);
  push(0,1);
  push(3,0.5);
  push(5,0.5);
  push(6,1.5);
  push(0,0.5);
  push(5,0.5);
  push(6,1.5);
  push(0,0.5);
}
