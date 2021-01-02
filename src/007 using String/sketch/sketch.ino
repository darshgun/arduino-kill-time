void setup()
{
  Serial.begin(9600);
  String myString = "Hello, duino";

  Serial.println(myString);

  myString.concat("lings!");
  Serial.println(myString);

  myString.toUpperCase();
  Serial.println(myString);
}

void loop()
{
}
