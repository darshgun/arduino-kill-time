int iterator = 0;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);

  while (iterator < 6)
  {
    Serial.print("Test ");
    Serial.println(iterator);
    iterator += 1;
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
}
