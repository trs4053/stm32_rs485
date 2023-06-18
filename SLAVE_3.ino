// Include the Software Serial library 
#include <SoftwareSerial.h> 
// Define a Software Serial object and the used pins 
SoftwareSerial softSerial(PA10, PA9);
// LED Pin 
int LED = PC13; 
int en = PA15; 
void setup()  { 
softSerial.begin(9600); 
//pinMode(LED, OUTPUT);
pinMode(en, OUTPUT);
} 
void loop()  { 
    
  digitalWrite(en,LOW);// Check if there is anything in the soft Serial Buffer 
  if (softSerial.available())  { 
// Read one value from the soft serial buffer and store it in the variable com 
    int com = softSerial.read(); 
// Act according to the value received 
    Serial.println(com);
  } 
}