#include <Arduino.h>

#define LED_1 D0
#define LED_2 D1
#define LED_3 D2

#define INTERVAL_1 1000 // interval at which to blink LED_1 (milliseconds)
#define INTERVAL_2 2000 // interval at which to blink LED_2 (milliseconds)
#define INTERVAL_3 5000 // interval at which to blink LED_3 (milliseconds)

unsigned long previousMillis1 = 0; // will store last time LED_1 was updated
unsigned long previousMillis2 = 0; // will store last time LED_2 was updated
unsigned long previousMillis3 = 0; // will store last time LED_3 was updated



void setup()
{ 
  pinMode(LED_1, OUTPUT); // initialize the digital pin as an output
  pinMode(LED_2, OUTPUT); // initialize the digital pin as an output
  pinMode(LED_3, OUTPUT); // initialize the digital pin as an output
}

void loop()
{
  unsigned long currentMillis = millis();

  // Blink LED_1
  if (currentMillis - previousMillis1 >= INTERVAL_1)
  {
    previousMillis1 = currentMillis;
    digitalWrite(LED_1, !digitalRead(LED_1)); // toggle the LED
  }

  // Blink LED_2
  if (currentMillis - previousMillis2 >= INTERVAL_2)
  {
    previousMillis2 = currentMillis;
    digitalWrite(LED_2, !digitalRead(LED_2)); // toggle the LED
  }

  // Blink LED_3
  if (currentMillis - previousMillis3 >= INTERVAL_3)
  {
    previousMillis3 = currentMillis;
    digitalWrite(LED_3, !digitalRead(LED_3)); // toggle the LED
  }
}
