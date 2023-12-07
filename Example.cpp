#include "KeyboardLibrary.h"

const int buttonPin = 2; // Replace with the actual pin connected to your button
bool buttonState = false;
bool lastButtonState = false;

Keyboard keyboard;

void setup() {
    pinMode(buttonPin, INPUT);
}

void loop() {
    // Read the button state
    buttonState = digitalRead(buttonPin);

    // Check if the button state has changed
    if (buttonState != lastButtonState) {
        if (buttonState == HIGH) {
            // Button is pressed, handle the key press event
            handleKeyPress();
        }
    }

    lastButtonState = buttonState;

    // Update the OLED display
    keyboard.drawKeyboard();
    keyboard.oled.display();
}

void handleKeyPress() {
    // Perform actions based on the key press, for example:
    // - Update a text input field
    // - Trigger an action associated with the pressed key
}
