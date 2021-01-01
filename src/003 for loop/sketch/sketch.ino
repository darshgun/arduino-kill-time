int iterator;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);

  for (iterator = 20; iterator >= 0; iterator--)
  {
    Serial.println(iterator);
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
}
