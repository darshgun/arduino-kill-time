int iterator = 1;
int type;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  type = isEven(iterator);

  Serial.print(iterator);
  Serial.print("");

  if (type == 1)
  {
    Serial.println("odd");
  }
  else
  {
    Serial.println("even");
  }

  delay(2000);
  iterator++;
}

int isEven(int number)
{
  if (number % 2 == 0)
  {
    return 0;
  }
  return 1;
}
