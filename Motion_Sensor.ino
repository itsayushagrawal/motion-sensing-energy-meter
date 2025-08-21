// Task 1 -> Read Potentiometer value
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.prinln(analogRead(A0));
  delay(100);
}
