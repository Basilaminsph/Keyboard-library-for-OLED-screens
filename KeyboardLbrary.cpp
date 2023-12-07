#include "KeyboardLibrary.h"

Keyboard::Keyboard() {
    oled.begin(SSD1306_I2C, 0x3C); // Change the address if necessary
    oled.display(); // Display splash screen if needed
    delay(2000);
    oled.clearDisplay();
}

void Keyboard::drawCentreString(const char *buf, int y) {
    int16_t x, y1;
    uint16_t w, h;
    oled.getTextBounds(buf, 0, 0, &x, &y1, &w, &h);
    int16_t xPosition = (SCREEN_WIDTH - w) / 2;
    oled.setCursor(xPosition, y);
    oled.print(buf);
}

void Keyboard::drawTextBox() {
    oled.drawRect(0, 0, SCREEN_WIDTH, TEXTBOX_HEIGHT, WHITE);
}

void Keyboard::drawKey(int x, int y, const char *label) {
    oled.drawRect(x, y, LETTER_LENGTH, LETTER_HEIGHT, WHITE);
    drawCentreString(label, y + LETTER_HEIGHT / 2 - 3);
}

void Keyboard::drawKeyboard() {
    oled.setTextSize(1);
    oled.setTextColor(SSD1306_WHITE);

    drawTextBox();

    for (int i = 0; i < 26; ++i) {
        char letter = 'A' + i;
        int x = i % 13 * LETTER_LENGTH;
        int y = TEXTBOX_HEIGHT + (i / 13) * LETTER_HEIGHT;
        drawKey(x, y, &letter);
    }
}
