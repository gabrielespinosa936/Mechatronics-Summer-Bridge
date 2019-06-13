#define led 9
#define pot 0

void setup() {
  // put your setup code here, to run once:
  pinMode(led, 9);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(pot);

  val = map(val, 1, 1024, 1 , 255);

  analogWrite(led, val);

}
