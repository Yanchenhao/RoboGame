
#define T 450

int src[12] = {0, 262, 294, 330, 349, 392, 440, 494, 523, 587, 659,698};
//           None, 1 ,  2 ,  3 ,  4 ,  5 ,  6 ,  7 ,  1+,  2+,  3+, 4+

void push(int m, float t) {
  if(m == 0){
    delay(T*t);
    return;
  }
  float c = 1.0 / src[m] * 1000000 - 100;
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
  
  push(6,1);
  push(0,0.5);
  push(5,0.5);
  push(6,1);
  
  push(0,0.5);
  push(5,0.5);
  push(6,0.5);
  push(8,0.3);
  push(5,0.5);
  push(6,0.5);
  push(3,1);
  push(0,1);

  push(3,0.5);
  push(5,0.5);
  push(6,1);
  push(0,0.5);
  push(5,0.5);
  push(6,1);

  push(0,0.5);
  push(5,0.5);
  push(6,0.5);
  push(10,0.3);
  push(8,0.3);
  push(9,0.3);
  push(6,1);
  
  push(3,0.5);
  push(5,0.5);
  push(6,1);
  push(0,0.5);
  push(5,0.5);
  push(6,1);
  //
  push(0,0.5);
  push(5,0.5);
  push(6,0.5);
  push(8,0.3);
  push(5,0.5);
  push(6,0.5);
  push(3,0.5);
  push(5,0.5);
  push(1,0.6);
  push(2,0.6);

  push(3,0.5);
  push(8,0.3);
  push(6,0.5);
  push(10,0.3);

  push(9,0.25);
  push(10,0.15);
  push(9,0.15);
  push(8,0.2);
  push(9,0.2);
  push(6,0.3);

  //
  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.2);
  push(8,0.2);
  push(9,0.2);
  push(10,0.2);

  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(3,0.2);
  push(0,0.3);
  push(3,0.7);
  push(6,0.2);

  push(0,0.5);

  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.2);
  push(8,0.2);
  push(9,0.2);
  push(10,0.2);

  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(11,0.8);
  push(10,0.5);

  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.2);
  push(8,0.2);
  push(9,0.2);
  push(10,0.2);

  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(3,0.2);
  push(0,0.3);
  push(3,0.7);
  push(6,0.2);

  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.5);
  push(0,0.5);
  push(6,0.2);
  push(8,0.2);
  push(9,0.2);
  push(10,0.2);

  push(6,0.5);
  push(0,0.3);
  push(5,0.3);
  push(0,0.3);
  push(5,0.5);
  push(6,0.2);
  push(0,0.3);
  push(6,0.5);
  
}
