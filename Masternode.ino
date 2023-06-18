// Include the Software Serial library 
#include <SoftwareSerial.h> 
// Define a Software Serial object and the used pins 
SoftwareSerial softSerial(PA10, PA9);  // RX, TX 
int en = PA15; 

void setup()  {
  Serial.begin(9600); 
  softSerial.begin(9600);
  pinMode(en, OUTPUT);
  
} 
void loop()  { 
  digitalWrite(en,HIGH);  
// Check for received characters from the computer 
  //if (Serial.available())  { 
// Write what is received to the soft serial 
  softSerial.write(288); 
//  }
}
