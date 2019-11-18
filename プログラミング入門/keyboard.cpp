#include <Arduino.h>
#include <Keyboard.h>
#define sw1 4
void setup() {
  pinMode(sw1, INPUT);  
  Keyboard.begin();
}

void loop() {
  if (digitalRead(sw1) == HIGH) {
    Keyboard.print("Kemono friends");
    Keyboard.releaseAll();
    delay(100);
  }
}
