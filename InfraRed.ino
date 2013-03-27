
void setup() {
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println(analogRead(A0));
  delay(100);  
}
