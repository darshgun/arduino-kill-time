const int len = 6;
char my_array[len] = "Hello"; // "H", "e", "l", "l", "o", "\0"

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int i = 0; i < len; i++)
  {
    Serial.print(my_array[i]);
    if (my_array[i] == '\0')
    {
      break;
    }
  }

  Serial.println();
  delay(2000);
}
