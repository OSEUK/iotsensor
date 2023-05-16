#include <DHT.h>
#include <SoftwareSerial.h>

DHT mydht(A0,DHT11);
SoftwareSerial mySerial(2,3);

void setup() {
  mySerial.begin(9600);
  mydht.begin();
}

void loop() {
  float a = mydht.readTemperature();
  mySerial.println("t"+String(a));
  delay(1000);
  float b = mydht.readHumidity();        
  mySerial.println("m"+String(b));  
  delay(1000);                       
}