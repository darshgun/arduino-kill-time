void setup()
{
  randomSeed(analogRead(A1));
  Serial.begin(9600);
}

void loop()
{
  for (int i = 0; i < 5; i++)
  {
    Serial.print(random(1, 101));
    Serial.print(" ");
  }

  Serial.println("");
  delay(2000);
}
