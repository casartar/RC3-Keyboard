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
    //button 6 acts as a kind of shift key
    if(digitalRead(button_6)){
        digitalRead(button_1) ? Keyboard.release(KEY_F13) : Keyboard.press(KEY_F13);
        digitalRead(button_2) ? Keyboard.release(KEY_F14) : Keyboard.press(KEY_F14);
        digitalRead(button_3) ? Keyboard.release(KEY_F15) : Keyboard.press(KEY_F15);
        digitalRead(button_4) ? Keyboard.release(KEY_F16) : Keyboard.press(KEY_F16);
        digitalRead(button_5) ? Keyboard.release(KEY_F17) : Keyboard.press(KEY_F17);
    }else{
        digitalRead(button_1) ? Keyboard.release(KEY_F18) : Keyboard.press(KEY_F18);
        digitalRead(button_2) ? Keyboard.release(KEY_F19) : Keyboard.press(KEY_F19);
        digitalRead(button_3) ? Keyboard.release(KEY_F20) : Keyboard.press(KEY_F20);
        digitalRead(button_4) ? Keyboard.release(KEY_F21) : Keyboard.press(KEY_F21);
        digitalRead(button_5) ? Keyboard.release(KEY_F22) : Keyboard.press(KEY_F22);
    }
}
