//----------------------------------------------------------------------------------
//
// Nombre: LIMY 
// Autor:  Daniel Campoverde
// Descripcion: "Robot" para enviarle mensajes divertidos a Lorena
// Version: 1.0
//
//----------------------------------------------------------------------------------

#include <LiquidCrystal.h>

#define C5  523.25
#define D5  587.33
#define E5  659.26
#define F5  698.46
#define F5s 739.99
#define G5  783.99
#define AA5 880.00
#define B5  987.77
#define C6  1046.50
#define D6  1174.66
#define E6  1318.51
#define F6  1396.91
#define G6  1567.98

//http://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0128847
// C5-C6-B5-A5-F5#-G5-D6
// E5-E6-D6-C6-B5-C6-F6
// G6-F6-E6-D6-C6-B5-A5-G5-D6-E5-C6
 
const int buzzerPin = 8;
const int ledPin2 = 13;
 
int counter = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  delay(2000);
  lcd.print("  Hola  Lorena");
  lcd.setCursor(0, 1);
  delay(3000);
  lcd.print("  Como  estas?");
  Next();
  lcd.print("  Mi nombre es");
  lcd.setCursor(0, 1);
  lcd.print("      LIMY");
  Next();
  lcd.print(" Daniel me creo");
  lcd.setCursor(0, 1);
  lcd.print("para decirte que");
  Next();
  lcd.print("  TE EXTRANIA!");
  Next();
  lcd.print("  Eso debe ser");
  lcd.setCursor(0, 1);
  lcd.print(" verdad porque");
  Next();
  lcd.print("  Soy un robot");
  lcd.setCursor(0, 1);
  lcd.print(" y yo no miento");
  Next();
  lcd.print("     EN FIN");
  lcd.setCursor(0, 1);
  lcd.print("      .   ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("      ..  ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("      ... ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("      ....");
  delay(1000);
  lcd.clear();
  lcd.print("  Se que estas");
  lcd.setCursor(0, 1);
  lcd.print("   en  Disney");
  Next();
  lcd.print("   Asi que te");
  lcd.setCursor(0, 1);
  lcd.print("queria tocar....");
  Next();
  lcd.print("... una cancion!");
  Next();
  lcd.print(" (Daniel ayudo ");
  lcd.setCursor(0, 1);
  lcd.print("    un poco)");
  Next();
  lcd.print(" When you wish ");
  lcd.setCursor(0, 1);
  lcd.print("  upon a star ");
  delay(1000);
  play();
  Next();
  lcd.print(" Espero que te ");
  lcd.setCursor(0, 1);
  lcd.print(" haya gustado y");
  Next();
  lcd.print("que ahora si le ");
  lcd.setCursor(0, 1);
  lcd.print(" creas a Daniel");
  Next();
  lcd.print(" cuando te dice");
  lcd.setCursor(0, 1);
  lcd.print("que te extrania ");
  Next();
  lcd.print("ya que solo por ");
  lcd.setCursor(0, 1);
  lcd.print("esa razon existo");
  Next();
  lcd.print("en realidad LIMY");
  lcd.setCursor(0, 1);
  lcd.print("   significa:");
  Next();
  lcd.print("   Lorena, I ");
  lcd.setCursor(0, 1);
  lcd.print("    Miss You");
  Next();
  lcd.print(" Espero que te ");
  lcd.setCursor(0, 1);
  lcd.print("diviertas mucho ");
  Next();
  lcd.print("     BYEE!!");
}

void loop() {
  // put your main code here, to run repeatedly:
}

void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration+1);
 
}


void Next()
{
  delay(3000);
  lcd.clear();
  delay(1000);
}
void play ()
{
// C5-C6-B5-A5-F5#-G5-D6
  beep(C5,250);
  delay(150);
  beep(C6,250);
  delay(150);
  beep(B5,250);
  delay(150);
  beep(AA5,250);
  delay(150);
  beep(F5s,250);
  delay(150);
  beep(G5,250);
  delay(150);
  beep(D6,500);
  delay(300);
// E5-E6-D6-C6-B5-C6-F6
  beep(E5,250);
  delay(150);
  beep(E6,250);
  delay(150);
  beep(D6,250);
  delay(150);
  beep(C6,250);
  delay(150);
  beep(B5,250);
  delay(150);
  beep(C6,250);
  delay(150);
  beep(F6,500);
  delay(300);
// G6-F6-E6-D6-C6-B5-A5-G5-D6-E5-C6
  beep(G6,250);
  delay(150);
  beep(F6,250);
  delay(150);
  beep(E6,250);
  delay(150);
  beep(D6,250);
  delay(150);
  beep(C6,250);
  delay(150);
  beep(B5,250);
  delay(150);
  beep(AA5,250);
  delay(150);
  beep(G5,250);
  delay(150);
  beep(D6,500);
  delay(200);
  beep(E5,500);
  delay(200);
  beep(C6,500);
  delay(1000);

}
