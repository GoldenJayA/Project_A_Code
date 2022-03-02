
/* Code that works */
const int  buttonPin = 8;    
const int ledPin1 = 3;       
const int ledPin2 = 4;

int buttonPressCounter = 1;   
int buttonState = 0;         
int lastButtonState = 0;     

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);       //Detects when the button is pressed
  
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {      
      buttonPressCounter ++;
  } else {
    delay(20);
  }
  
lastButtonState = buttonState;        // Sets our button state so when it loops again, it will switch to the opposite

if (buttonPressCounter % 2 == 0) {   // Keeps the current flowing when the button is pressed. Turns off after pressing again.
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
} else {
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);

}

  }}

      
