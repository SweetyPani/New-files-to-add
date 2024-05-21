
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);   // setup the baud rate.
  Serial.println("Hello world");  // write something on console
  Serial.flush();  //flushing the serial number
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello world");  // write something on console
  Serial.println("line in loop function");
  delay(5000);  //delay for 5 seconds.
}
