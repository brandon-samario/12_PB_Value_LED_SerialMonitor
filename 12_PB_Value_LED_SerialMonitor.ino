/*
  PB Value and LED with Serial Monitor
  Use pinmode, set pin 4 as input(pushbutton), and set pin 2 as output (LED)
  It reads a digital input on pin 4 and prints the results to the Serial Monitor
  Use serial begin to start serial monitoring, and use serial.print or serial.println to print value
  LED on PB print value is 1
  LED off PB print value is 0
*/

//set pin numbers
const int ledPin = 2;
const int buttonPin = 4;

//change in variable
int buttonState = 0; //variable for reading pushbutton status

// the setup function runs once when you press reset or power the board
void setup() {
  
Serial.begin(9600); // start serial connection
pinMode(ledPin, OUTPUT); //initialize the LED pin as an output
pinMode(buttonPin, INPUT); //initialize the pushbutton pin as an input
}

// the loop routine runs over and over again forever
void loop() {

buttonState = digitalRead(buttonPin); //read state of pushbutton value

if (buttonState == HIGH)  {

digitalWrite(ledPin, LOW); //LED OFF
Serial.println("the pb value = 0"); // pushbutton print value  
}

else  {

digitalWrite(ledPin, HIGH); //LED ON
Serial.println("the pb value = 1"); // pushbutton print value
}

}
