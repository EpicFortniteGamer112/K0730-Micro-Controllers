int pinButton = 8; //the pin where we connect the button
int LED = 2; //the pin we connect the LED

void setup() {
  pinMode(pinButton, INPUT); //set the button pin as INPUT
  pinMode(LED, OUTPUT); //set the LED pin as OUTPUT
}

void loop() {
  int stateButton = digitalRead(pinButton); //read the state of the button
  if(stateButton == 1) {  //if is pressed
    digitalWrite(LED, HIGH); //write 1 or HIGH to led pin
  } else {  //if not pressed
    digitalWrite(LED, LOW);  //write 0 or low to led pin
  }
}
