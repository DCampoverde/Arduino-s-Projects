#include <SoftwareSerial.h>

SoftwareSerial BTserial(10, 11); //RX|TX

char c = ' ';
int s = 0;


 void setup(){
   pinMode(13,OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   BTserial.begin(9600);
   Serial.begin(9600);
 }

 void loop(){

  Serial.flush();
  if (BTserial.available()){
   c = BTserial.read(); 
   Serial.print(c);
  }
  else 
   c = ' ';

  if (c == 'a'){
    
      GO();
  }
  else if (c == 'b'){
    
    RETRO();
  }
  else if (c == 'c'){
    
    DER();
  }
  else if (c == 'd'){
    
    IZQ();
  }

  else if (c == 'l'){

    if (s == 0){
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      s=1;
    }
    else if (s == 1){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      s=0;  
    }
  }

  delay(10);
}
void GO()
{
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  
}

void RETRO()
{
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  
}

void IZQ ()
{
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
}

void DER ()
{
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW); 
}
