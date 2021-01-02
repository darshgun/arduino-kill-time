const int len = 6;
int my_array[len] = {0, 2, 4, 6, 8, 10};

void setup()
{
  Serial.begin(9600);

  for (int i = 0; i < len; i++)
  {
    Serial.println(my_array[i]);
  }
}

void loop()
{
}
