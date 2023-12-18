#include <Wire.h> // Library for I2C communication
#include <DS3231.h>



// initialisation de l'horloge et de la date
DS3231 horloge;
RTCDateTime datee;

void setup() {

pinMode(10, OUTPUT);

  // put your setup code here, to run once:
  Serial.begin(9600);
  
  horloge.begin();
  delay(2000);
  Serial.println("demarrage de l'horloge");
  //horloge.setDateTime(2023, 1, 1, 13, 29, 00);
  //
  //horloge.setDateTime(__DATE__, __TIME__);   
  Serial.println("horloge demarree");
  
  
}
//declaration de fonctions

void onn()
{
  digitalWrite(10,HIGH);
  Serial.println("Lampe est allumee");                        
}
void off()
{
  digitalWrite(10,LOW);
  Serial.println("Lampe est eteinte");  
}



void loop() {
  datee = horloge.getDateTime();
  Serial.println("il fait");
  Serial.print(datee.hour);
  Serial.print(":");
  Serial.println(datee.minute);
  
  if((datee.hour >=  7 && datee.hour <= 18) && (datee.minute >= 00  && datee.minute <= 59) )
  {
    off();
    delay(2000);
  }
  else
  {
    onn();
    delay(2000);                                                         
  }
  
  
  delay(2000);
}
