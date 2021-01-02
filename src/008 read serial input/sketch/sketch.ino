void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(200);
}

void loop()
{
  String my_string = "";

  while (my_string.equals(""))
  {
    my_string = Serial.readString();
  }

  Serial.println(my_string);
}
