//Arduino code to detect presence and absence of light using a photoresistor module ky018

#include <SoftwareSerial.h>

int senPin=A0;
int senVal=0;
int redLed= 3;
int blueLed=4;

void setup() {

 pinMode(redLed, OUTPUT);
 pinMode(blueLed, OUTPUT);

 //if you want to see the sensor value, enalble serial monitor at 9600 baurd rate.
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
senVal=analogRead(senPin); // read    the value from the snesor. If the intensity of light is high, the value of sensor is low and vice versa.
Serial.println(senVal); // ptirnt the value from sensor to the serial monitor.

if (senVal>600)
{
  digitalWrite(redLed,HIGH); //RED LED on
  digitalWrite(blueLed, LOW); //BLUE LED off
  delay(1000);
  }else if(senVal<600){
  digitalWrite(redLed,LOW); //RED LED off
  digitalWrite(blueLed, HIGH); //BLUE LED on
  delay(1000);
    
    }
  
  }
