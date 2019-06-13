int waterSensor = 13; // Attach Water sensor to Arduino Digital Pin 8
int LED = 12; // Attach an LED to Digital Pin 9 (or use onboard LED)

void setup() {
   pinMode(waterSensor, INPUT); // The Water Sensor is an Input
   Serial.begin(9600);
}

void loop() {
   /* The water sensor will switch LOW when water is detected.
   Get the Arduino to illuminate the LED and activate the buzzer
   when water is detected, and switch both off when no water is present */
   if( digitalRead(waterSensor) == LOW) {
      Serial.print("LOW!!!!");
      Serial.print("\n");
   }else {
      Serial.print("NOT LOW");
      Serial.print("\n");
   }
}
