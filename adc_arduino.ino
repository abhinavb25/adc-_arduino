
int digitalValue = 0;// variable to store the value coming from the sensor

void setup() {
  Serial.begin(19200);
}

void loop() {
  digitalValue = analogRead(A0);// read the value from the analog channel
  Serial.print("digital value = ");
  Serial.println(digitalValue);        //print digital value on serial monitor
  delay(1000);
}
