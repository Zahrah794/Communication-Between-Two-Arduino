#define Ledpin 8    // Pin number for the LED
int received = 0;   // Variable to store the received data

void setup() {
  Serial.begin(9600);      // Initialize the serial communication
  pinMode(Ledpin, OUTPUT); // Set the LED pin as output
}

void loop() {
  if (Serial.available()) {
    while (Serial.available() > 0) {
      received = 0;                              // Clear the received variable
      received = Serial.read() - '0';            // Read the incoming data and convert it to integer
    }
  }
  
  if (received == 1) {
    digitalWrite(Ledpin, HIGH);   // Turn on the LED if the received value is 1
  } else {
    digitalWrite(Ledpin, LOW);    // Turn off the LED if the received value is not 1
  }
  
  delay(100);  // Delay for a short period
}
