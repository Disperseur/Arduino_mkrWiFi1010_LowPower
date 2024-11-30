// Exemple de base pour afficher la charge de la batterie
#include "..\src\MKRLiPo2A_LowPower.h"



void setup() {
   
  Serial.begin(9600);               // start Serial port with a baudrate of 9600bps
  
  LowPower_Setup();

}

void loop()
{
  
  //report information over Serial
  Serial.print(LowPower_getBattery());
  Serial.println("%.");

  delay(500);
}