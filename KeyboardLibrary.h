#ifndef KeyboardLibrary_h
#define KeyboardLibrary_h

#include <Adafruit_SSD1306.h>
#include <SPI.h>

class Keyboard {
public:
    Keyboard();

    void drawKeyboard();

private:
    Adafruit_SSD1306 oled;
    static const int SCREEN_WIDTH = 128;
    static const int SCREEN_HEIGHT = 64;
    static const int LETTER_LENGTH = 10;
    static const int LETTER_HEIGHT = 20;
    static const int TEXTBOX_HEIGHT = 24;
    static const int KEYBOARD_HEIGHT = 40;

    void drawCentreString(const char *buf, int y);
    void drawTextBox();
    void drawKey(int x, int y, const char *label);
};

#endif
