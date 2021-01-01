int led = 13;
int interval = 1000;

void setup()
{
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(interval);
  digitalWrite(led, LOW);
  delay(interval);
}
