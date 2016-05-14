void setup()
{
  pinMode(13,OUTPUT);
  pinMode(2,INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(2)==1)
  {
    digitalWrite(13,1);
  }
  else
  {
    digitalWrite(13,0);
  }
}
