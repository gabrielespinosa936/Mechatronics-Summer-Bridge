/*
Adafruit Arduino - Lesson 3. RGB LED
*/
 
int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int pushPin = 8;
int value = 0;
int whitePin = 8;
 
//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE
 
void setup()
{
  pinMode(pushPin, INPUT);
  pinMode(redPin, OUTPUT);  
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
  pinMode(whitePin, OUTPUT);
}
 
void loop()
{
  value = digitalRead(pushPin);
  if (value == LOW){
  //setColor(255, 0, 0);  // red
  //delay(4000);
  //setColor(0, 255, 0);  // green
  //delay(4000);
  //setColor(0, 0, 255);  // blue
  //delay(4000);
  //setColor(255, 255, 0);  // yellow
  //delay(4000);  
//  setColor(80, 0, 80);  // purple
//  delay(4000);
  //setColor(0, 255, 255);  // aqua
//  delay(100);
    digitalWrite(whitePin, HIGH);
  }
  else{
    digitalWrite(whitePin, LOW);
//      delay(100);
  }
}
 
void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
