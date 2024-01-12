#include <dht11.h> // knjiznica za temperaturo in vlago
#define DHT11PIN 8 // definiramo dht11 vhod na 8
dht11 DHT11;

void  setup()
{
  Serial.begin(9600); 
}

void loop()
{
  Serial.println();

  int chk = DHT11.read(DHT11PIN); // branje iz senzorja
  
  Serial.print("Vlaznost (%): ");
  Serial.println((float)DHT11.humidity, 2); // izpis vlage

  Serial.print("Temperatura (C): ");
  Serial.println((float)DHT11.temperature, 2); // izpis temperature

  delay(2000);

}