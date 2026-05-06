#include <Arduino_RouterBridge.h>

void setLedState (bool state)
{
  Serial.println(state);
  digitalWrite(LED_BUILTIN, !state);
}

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  Bridge.begin();
  Bridge.provide("LED", setLedState);
}

void loop() {
  // put your main code here, to run repeatedly:
}
