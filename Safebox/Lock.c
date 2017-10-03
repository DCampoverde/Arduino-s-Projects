#include <IRremote.h>
#include <SoftwareSerial.h>

SoftwareSerial BTserial(10, 11); //RX|TX


//SoftwareSerial BTserial(10, 11); //RX|TX
int RECV_PIN = 6;
int speakerPin = 9;

IRrecv infra(RECV_PIN);

 decode_results result;
 

char c = ' ';
char OK[8] = "FF02FD"; //Boton OK
int cont = 0;
 void setup(){
   pinMode(13,OUTPUT);
   pinMode(6, INPUT);
   pinMode(9, OUTPUT);
   pinMode(8, OUTPUT);
   BTserial.begin(9600);
   infra.enableIRIn(); //Iniciar el receptor
   infra.blink13(true);//Prender LED en pin 13
   Serial.begin(9600);
   }


void loop() {
  if (infra.decode(&result)){
    Serial.println (result.value,HEX);
    if (result.value == 0xFF02FD){
        if (digitalRead(8)== LOW){
          digitalWrite(8,HIGH);
          Serial.println ("Tono");
          playTone(1915,4000);
          Btserial.write('a');
        }
        else {
          digitalWrite(8,LOW);
        }
    }
    infra.resume();
    
  }
}

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}
