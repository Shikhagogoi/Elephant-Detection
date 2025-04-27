#include <Wire.h>
#include <SoftwareSerial.h>

// LED on pin 13
const int ledPin = 13;
SoftwareSerial gsmSerial(5, 9); // RX, TX for GSM module

void setup()
{
  Wire.begin(0x8); // Join I2C bus as slave with address 8
  Wire.onReceive(receiveEvent); // Call receiveEvent when data received
  pinMode(ledPin, OUTPUT); // Setup pin 13 as output
  digitalWrite(ledPin, LOW); // Turn LED off

  gsmSerial.begin(9600); // Setting the baud rate of GSM Module
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  delay(1000);
  Serial.println("Preparing to send SMS");
}

void receiveEvent(int howMany)
{
  while (Wire.available())
  {
    char command = Wire.read();
    if (command == 0x1)
    {
      sendSMS();
      digitalWrite(ledPin, HIGH);
    }
  }
}

void sendSMS()
{
  Serial.println("Setting the GSM in text mode");
  gsmSerial.println("AT+CMGF=1\r"); // Set the GSM module in text mode
  delay(2000);

  Serial.println("Sending SMS to the desired phone number!");
  // gsmSerial.println("AT+CMGS=\"+9180994*****\"\r"); // Replace with your desired phone number
  gsmSerial.println("AT+CMGS=\"+919612561***\"\r");
  delay(2000);

  gsmSerial.print("Warning!! Elephant Detected"); // Replace with your desired SMS text
  delay(200);
  gsmSerial.write(26); // Send CTRL+Z to indicate the end of the SMS message
  delay(2000);
}

void loop()
{
  delay(100);
}
