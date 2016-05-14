void setup()
{
  Serial.begin(9600);
  Serial1.begin(57600);
}

void loop()
{
  if(Serial.available())
  {
    Serial.write(Serial.read());
  }
  
  if(Serial1.available())
  {
    Serial.write(Serial1.read());
  }
}
