int flag_led = 0;       // Variable to store the LED flag status
#define Buttonpin 7     // Pin number for the button

void setup() {
  Serial.begin(9600);   // Initialize the serial communication
  pinMode(Buttonpin, INPUT);  // Set the button pin as input
}

void loop() {
  // Check if the button is pressed
  if (digitalRead(Buttonpin)) {
    flag_led = 1;     // Set the LED flag to 1 if the button is pressed
  } else {
    flag_led = 0;     // Set the LED flag to 0 if the button is not pressed
  }
  
  Serial.print(flag_led);   // Print the LED flag status
  delay(1000);              // Delay for 1 second
}
