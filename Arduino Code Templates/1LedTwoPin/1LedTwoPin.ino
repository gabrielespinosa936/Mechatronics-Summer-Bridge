void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(13, HIGH); // Setting pin 13 voltage high
  
  delay(1000); // 1000 milliseconds = 1 second
  
  digitalWrite(13, LOW); // Setting pin 13 voltage low

  delay(1000);

}
