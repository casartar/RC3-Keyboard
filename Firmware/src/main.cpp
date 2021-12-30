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
    digitalRead(button_1) ? Keyboard.release(KEY_LEFT_SHIFT) : Keyboard.press(KEY_LEFT_SHIFT);
    digitalRead(button_2) ? Keyboard.release('2') : Keyboard.press('2');
    digitalRead(button_3) ? Keyboard.release('3') : Keyboard.press('3');
    digitalRead(button_4) ? Keyboard.release('4') : Keyboard.press('4');
    digitalRead(button_5) ? Keyboard.release('5') : Keyboard.press('5');
    digitalRead(button_6) ? Keyboard.release('6') : Keyboard.press('6');
}
