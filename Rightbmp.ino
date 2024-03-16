
void rightbmp()
{
  // Reverse
  digitalWrite(Right_Forward, LOW);
  digitalWrite(Right_Reverse, HIGH);
  digitalWrite(Left_Forward, LOW);
  digitalWrite(Left_Reverse, HIGH);

 for(int counter = 1; counter <= 5; counter++)
  {
    digitalWrite(LED_C, HIGH);
    delay(200);
    digitalWrite(LED_C, LOW);
    digitalWrite(Left_LED_B, HIGH);
    digitalWrite(Right_LED_B, HIGH);
    delay(200);
    digitalWrite(Left_LED_B, LOW);
    digitalWrite(Right_LED_B, LOW);
    digitalWrite(Left_LED_A, HIGH);
    digitalWrite(Right_LED_A, HIGH);
    delay(200);
    digitalWrite(Left_LED_A, LOW);
    digitalWrite(Right_LED_A, LOW);
  }
  digitalWrite(Left_Motor_EN, LOW);
  digitalWrite(Right_Motor_EN, LOW);
  delay(500);

  // Turn 45 degrees to the left
  digitalWrite(Left_Motor_EN, LOW);
  digitalWrite(Right_Motor_EN, HIGH);

  for(int counter = 1; counter <= 5; counter++)
  {
    digitalWrite(Left_LED_A, HIGH);
    digitalWrite(Left_LED_B, HIGH);
    digitalWrite(Right_LED_A, LOW);
    digitalWrite(Right_LED_B, LOW);
    digitalWrite(LED_C, LOW);
    delay(100);
    digitalWrite(Left_LED_A, LOW);
    digitalWrite(Left_LED_B, LOW);
    delay(100); 
  }
  analogWrite(Right_Motor_EN, 190);
  analogWrite(Left_Motor_EN, 190);
  forward();
}
