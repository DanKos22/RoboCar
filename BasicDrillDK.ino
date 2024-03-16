// Dan Koskiranta
// G00397054
// 26 February

const int Right_Motor_EN = 11;
const int Right_Forward = 9;
const int Right_Reverse = 10;

const int Left_Motor_EN = 6;
const int Left_Forward = 7;
const int Left_Reverse = 8;

const int Left_LED_A = 12;
const int Left_LED_B = 13;
const int Right_LED_A = 4;
const int Right_LED_B = 5;
const int LED_C = 1;
const int LeftBmp = 2;
const int RightBmp = 3;

void setup() {
  // put your setup code here, to run once:
  
pinMode(Right_Motor_EN, OUTPUT);
pinMode(Right_Forward, OUTPUT);
pinMode(Right_Reverse, OUTPUT);
pinMode(Left_Motor_EN, OUTPUT);
pinMode(Left_Forward, OUTPUT);
pinMode(Left_Reverse, OUTPUT);

pinMode(Left_LED_A, OUTPUT);
pinMode(Left_LED_B, OUTPUT);
pinMode(Right_LED_A, OUTPUT);
pinMode(Right_LED_B, OUTPUT);
pinMode(LED_C, OUTPUT);
pinMode(LeftBmp, INPUT);
pinMode(RightBmp, INPUT);


  // Drive at slow speed
  analogWrite(Right_Motor_EN, 120);
  analogWrite(Left_Motor_EN, 120);
  // Call and execute forward function
  forward();
  

  // Drive at medium speed
  analogWrite(Right_Motor_EN, 150);
  analogWrite(Left_Motor_EN, 150);
  forward();
}

void loop() {
  
  // Drive at high speed
  analogWrite(Right_Motor_EN, 190);
  analogWrite(Left_Motor_EN, 190);
  forward();

}

// Drive forward
void forward()
{
  digitalWrite(Right_Forward, HIGH);                           
  digitalWrite(Right_Reverse, LOW);
  digitalWrite(Left_Forward, HIGH);
  digitalWrite(Left_Reverse, LOW);

  // If leftbumper is pressed
  if (digitalRead(LeftBmp)== LOW)
  {
    digitalWrite(Right_Motor_EN, LOW);
    digitalWrite(Left_Motor_EN, LOW);
    delay(200);
    analogWrite(Right_Motor_EN, 120);
    analogWrite(Left_Motor_EN, 120);
    leftbmp();
  }
  // If rightbumper is pressed
  else if(digitalRead(RightBmp)== LOW)
  {
    digitalWrite(Right_Motor_EN, LOW);
    digitalWrite(Left_Motor_EN, LOW);
    delay(200);
    analogWrite(Right_Motor_EN, 120);
    analogWrite(Left_Motor_EN, 120);
    rightbmp();  
  }

 // For loop to drive the LEDs
 for(int counter = 1; counter <= 5; counter++)
 {
   digitalWrite(Left_LED_A, HIGH);
   digitalWrite(Right_LED_A, HIGH);
   delay(200);
   digitalWrite(Left_LED_A, LOW);
   digitalWrite(Right_LED_A, LOW);
   digitalWrite(Left_LED_B, HIGH);
   digitalWrite(Right_LED_B, HIGH);
   delay(200);
   digitalWrite(Left_LED_B, LOW);
   digitalWrite(Right_LED_B, LOW);
   digitalWrite(LED_C, HIGH);
   delay(200);
   digitalWrite(LED_C, LOW); 
   delay(200);
 }
}
