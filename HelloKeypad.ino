/* @file HelloKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates the simplest use of the matrix Keypad library.
|| #
*/
#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {8,7,6,5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {4,3,2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );



void setup(){
  //Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
  
void loop(){
  char key = keypad.getKey();
  
  if (key == '1'){
    digitalWrite(9,HIGH);
  }
  else if (key == '4'){
    digitalWrite(9,LOW);
  }
  //========================
  if (key == '2'){
    digitalWrite(10,HIGH);
  }
  else if(key == '5'){
    digitalWrite(10,LOW);
  }
  //========================
  
  if (key == '3'){
                digitalWrite(11,HIGH);
    



  }
  else if (key == '6'){
                digitalWrite(11,LOW);
    
  }
  //delay(20);
}
