#include <Arduino.h>
#include <Keyboard.h>
#define button_1 20
#define button_2 19
#define button_3 21
#define button_4 14
#define button_5 15
#define button_6 18

#define led 7

void setup() {
    pinMode(button_1,INPUT_PULLUP);
    pinMode(button_2,INPUT_PULLUP);
    pinMode(button_3,INPUT_PULLUP);
    pinMode(button_4,INPUT_PULLUP);
    pinMode(button_5,INPUT_PULLUP);
    pinMode(button_6,INPUT_PULLUP);
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
    if (!digitalRead(button_3)) {
        Keyboard.press('3');
    }
    else {
        Keyboard.release('3');
    }
    if (!digitalRead(button_4)) {
        Keyboard.press('4');
    }
    else {
        Keyboard.release('4');
    }
    if (!digitalRead(button_5)) {
        Keyboard.press('5');
    }
    else {
        Keyboard.release('5');
    }
    if (!digitalRead(button_6)) {
        Keyboard.press('6');
    }
    else {
        Keyboard.release('6');
    }
}
