#include <Arduino.h>
#include <Keyboard.h>
#define button_1 2
#define button_2 3

void setup() {
    pinMode(button_1,INPUT_PULLUP);
    pinMode(button_2,INPUT_PULLUP);
}

void loop() {
    if (!digitalRead(button_1)) {
        Keyboard.press('1');
    }
    else {
        Keyboard.release('1');
    }
    if (!digitalRead(button_2)) {
        Keyboard.press('2');
    }
    else {
        Keyboard.release('2');
    }
}