#include <Servo.h>
 Servo myservo;
 int potpin=0;
 int der;

void setup()
{
  myservo.attach(2);
}

void loop()
{
  der=analogRead(potpin);
  der=map(der,0,1023,0,179);
  myservo.write(der);
  delay(15);
}
