void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(13, HIGH); // Setting pin 13 voltage high

  /**
   * tone takes in 3 parameters the first parameter is the pin number
   * the second parameter is the frequency 0 - 3000
   * and the third is the duration in milliseconds
   */
  tone(8, 2000, 1000);
  
  delay(1000); // 1000 milliseconds = 1 second
  
  digitalWrite(13, LOW); // Setting pin 13 voltage low
  
  delay(1000);

}
