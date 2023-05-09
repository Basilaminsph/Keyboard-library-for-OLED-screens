#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
int letterlength = 5;
int letterheight = 20;
Adafruit_SSD1306 oled;

//ngl this was actually such an effort to do

String textboxinput;
void drawCentreString(const char *buf, int x, int y)
{
    int16_t x1, y1;
    uint16_t w, h;
    oled.getTextBounds(buf, x, y, &x1, &y1, &w, &h); //calc width of new string
    oled.setCursor(x - w / 2, y);
    oled.print(buf);
}
void draw_keyboard(){
     oled.setTextSize(1);
  oled.setTextColor(SSD1306_WHITE);
  oled.setCursor(0,0);
  oled.clearDisplay();

  
    //textbox to print text
oled.drawRect(0, 0, 125, 24, WHITE);
//keyboard
oled.drawRect(0, 24, 128, 44, WHITE);

//A 
oled.drawRect(0, 24, letterlength, letterheight, WHITE);
drawCentreString("A", 3, 12);

//B
oled.drawRect(5, 24, letterlength, letterheight, WHITE);
drawCentreString("B", 8, 12);

//C
oled.drawRect(10, 24, letterlength, letterheight, WHITE);
drawCentreString("C", 13, 12);

//D
oled.drawRect(15, 24, letterlength, letterheight, WHITE);
drawCentreString("D", 18, 12);

//E
oled.drawRect(20, 24, letterlength, letterheight, WHITE);
drawCentreString("E", 23, 12);

//F
oled.drawRect(25, 24, letterlength, letterheight, WHITE);
drawCentreString("F", 28, 12);

//G
oled.drawRect(30, 24, letterlength, letterheight, WHITE);
drawCentreString("G", 33, 12);

//H
oled.drawRect(35, 24, letterlength, letterheight, WHITE);
drawCentreString("H", 38, 12);

//I
oled.drawRect(40, 24, letterlength, letterheight, WHITE);
drawCentreString("I", 43, 12);

oled.drawRect(45, 24, letterlength, letterheight, WHITE);
drawCentreString("J", 48, 12);

//J
oled.drawRect(50, 24, letterlength, letterheight, WHITE);
drawCentreString("J", 53, 12);

//K
oled.drawRect(55, 24, letterlength, letterheight, WHITE);
drawCentreString("K", 58, 12);

//L
oled.drawRect(60, 24, letterlength, letterheight, WHITE);
drawCentreString("L", 63, 12);

//M
oled.drawRect(65, 24, letterlength, letterheight, WHITE);
drawCentreString("M",68, 12);

//N 
oled.drawRect(0, 44, letterlength, letterheight, WHITE);
drawCentreString("N",3,22);

//O
oled.drawRect(5,44, letterlength, letterheight, WHITE );
drawCentreString("O", 8, 22);

//P
oled.drawRect(10, 44, letterheight, letterlength, WHITE);
drawCentreString("P",13, 22 );

//Q
oled.drawRect(15, 44, letterheight, letterlength, WHITE);
drawCentreString("Q",18, 22 );

//R
oled.drawRect(20, 44, letterheight, letterlength, WHITE);
drawCentreString("R",23, 22 );

//S
oled.drawRect(25, 44, letterheight, letterlength, WHITE);
drawCentreString("S",28, 22 );

//T
oled.drawRect(30, 44, letterheight, letterlength, WHITE);
drawCentreString("T",33, 22 );

//U
oled.drawRect(35, 44, letterheight, letterlength, WHITE);
drawCentreString("U",38, 22 );

//V
oled.drawRect(40, 44, letterheight, letterlength, WHITE);
drawCentreString("V",43, 22 );

//W
oled.drawRect(45, 44, letterheight, letterlength, WHITE);
drawCentreString("W",48, 22 );

//X
oled.drawRect(50, 44, letterheight, letterlength, WHITE);
drawCentreString("X",53, 22 );

//Y
oled.drawRect(55, 44, letterheight, letterlength, WHITE);
drawCentreString("Y",58, 22 );

//Z
oled.drawRect(60, 44, letterheight, letterlength, WHITE);
drawCentreString("Z",63, 22 );
}

void letter_Input(){


}
