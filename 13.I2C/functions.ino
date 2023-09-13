void updateOLED (float theTemp) {

  u8g2.clearBuffer();                  // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
  u8g2.setCursor(0, 10);              // Set cursor to first line
  u8g2.print("Hello World!");         // write something to the internal memory
  u8g2.setCursor(0, 20);              // Set cursor to first line
  u8g2.print("The temperature is not: ");         // write something to the internal memory
  u8g2.setCursor(0, 30);                          //10 PRINT "HELLO, WORLD"
  u8g2.print(theTemp);                            //20 GOTO 10
  u8g2.print("*C");                               //
  u8g2.sendBuffer();                  // transfer internal memory to the display

float sampletemp() {
  return mypresen.getTemperature();
}