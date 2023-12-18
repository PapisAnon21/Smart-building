#include <ESP8266WebServer.h> // include ESP8266WebServer lib add also espwifi : no i chek it not add esp wifi so i included it my_self
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include "html_page.h" // webpage HTML 
// la j'inclus les biblio necessaire a la gestion du temps et de la date

ESP8266WebServer my_server(80); // associate server with library  creating objet server
int a = 5;

// setup the wifi esp
char ssidAP[] = "WIFI_ESP"; // WLAN SSID and password
char passwordAP[] = "mypassword21";
//horloge.setDateTime(__DATE__, __TIME__);// on utilise gateway car l'esp sera en ap_mode
/*
IPAddress local_ip(192,168,2,1); // pre-defined IP address values
IPAddress gateway(192,168,2,1);
IPAddress subnet(255,255,255,0);
*/

int dev_1 = 14; // reprsente respectivement les appareils 1,2,3
int dev_2 = 12;
int dev_3 = 13; 
#define led 4
//int LEDG = LOW;

void setup() {

Serial.begin(115200); 
WiFi.mode(WIFI_AP); // notre esp va se comporter comme un point d'acces
delay(1000); // on attend 1seconde
WiFi.softAP(ssidAP, passwordAP); // initialise Wi-Fi 
//WiFi.softAPConfig(local_ip, gateway , subnet); // initialisation de l'adreesse ip ainsi que le gateway : adressse du routeur
IPAddress myIP = WiFi.softAPIP();
Serial.print("AP IP address: ");
delay(2000);
Serial.println(myIP);
my_server.begin(); // la je demarre le serveur

// ci dessous on voit les endpoint qui sont les differentes url que l'utilisateur peut passer au serveur : ces urls sont rattache a des fonction bien specifique

my_server.on("/", base); //  la une fois un client connecte notre serveur va lui generer une page html  qui est l'output de la fonction  base
my_server.on("/device_1/on", active_device_1); // map URLs to functions: replace ledg function
my_server.on("/device_1/off", desactive_device_1); 
my_server.on("/device_2/on", active_device_2); 
my_server.on("/device_2/off", desactive_device_2); 
my_server.on("/device_3/on", active_device_3); 
my_server.on("/device_3/off", desactive_device_3);
// a partir de la je programme des duree de fonctionnement pour les app
my_server.on("/demande_duree", active_or_desactive_x_second_this_device);
// maintenant essayons d'ajouter la fonctionnalite heure d'allumage et/ou d'extinction
//my_server.on("/hours_minute",execute_heure_minute_given);

pinMode(dev_1, OUTPUT); // define LED pins as output
pinMode(dev_2, OUTPUT);
pinMode(dev_3, OUTPUT);
pinMode(led , OUTPUT);

// la j'initialise tout a low pour a chaque demarrage tout est mis a bas
digitalWrite(dev_1 , LOW);
digitalWrite(dev_2 , LOW);
digitalWrite(dev_3 , LOW);
digitalWrite(led , LOW);
}

// avant de venir au loop definissons les differentes fonction rattache au endpoint : my_serveur.send equivaut au fameix render_template de flask
// la c'est la fonction base qui est attache a l'adrsse par defaut du serveur : c'est lui qui retourne la page web
void base() 
{ 
 // and send HTML code to client
my_server.send(200, "text.html", webcode);  // webcode(LEDG, LEDR, counter) // webode is now replace with page
}
// fonction d'activation et de desactivation des differents appareils
// pour l'app 1
void active_device_1() // fontion qui active l'appareil 1
{ 
digitalWrite(dev_1, HIGH);
my_server.send(200, "text/html", webcode);
}
void desactive_device_1() 
{ 
digitalWrite(dev_1, LOW);
my_server.send(200, "text/html", webcode);
}

// pour l'app 2
void active_device_2() 
{ 
digitalWrite(dev_2, HIGH);
my_server.send(200, "text/html", webcode);
}
void desactive_device_2() 
{ 
digitalWrite(dev_2, LOW);
my_server.send(200, "text/html", webcode);
}

// pour l'app 3
void active_device_3() 
{ 
digitalWrite(dev_3, HIGH);
my_server.send(200, "text/html", webcode);
}
void desactive_device_3() 
{ 
digitalWrite(dev_3, LOW);
my_server.send(200, "text/html", webcode);
}
void active_or_desactive_x_second_this_device()
{
  int broch_name = (my_server.arg("pin")).toInt();
  String state = my_server.arg("etat");
  int duree_voulue = (my_server.arg("duration")).toInt();
  // a partir de la  commence le traitement
  if (state == "on"){
    // dans ce cas on active la pin voulue
    digitalWrite(broch_name,HIGH);
    delay(duree_voulue*1000);
    digitalWrite(broch_name,LOW);
    my_server.send(200, "text/html", webcode);
  }
  else
  {
    // on sait que ce cas correspond forcement a l'evenement contraire
    digitalWrite(broch_name,LOW);
    delay(duree_voulue*1000);
    digitalWrite(broch_name,HIGH);
    my_server.send(200, "text/html", webcode);
  }
  
}
/*
void execute_heure_minute_given{
  DateTime maintenant = RTC.now();
  int minute_actuel = (maintenant.minute()).toInt()
  String heure_debut, minute_debut, heure_fin, minute_fin;
  heure_debut = my_server.arg("heure_start");
  minute_debut = my_server.arg("minute_start");
  heure_fin = my_server.arg("heure_end");
  minute_fin = my_server.arg("minute_end");

}

*/









void loop() {
  // put your main code here, to run repeatedly:
my_server.handleClient();
digitalWrite(led, HIGH);
delay(125);
digitalWrite(led , LOW);
delay(125);
}
