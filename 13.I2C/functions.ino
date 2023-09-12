void updateOLED (float theTemp) {

  u8g2.clearBuffer();                  // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
  u8g2.setCursor(0, 10);              // Set cursor to first line
  u8g2.print("Hello World!");         // write something to the internal memory
  u8g2.setCursor(0, 20);              // Set cursor to first line
  u8g2.print("The temperature is: ");         // write something to the internal memory
  u8g2.setCursor(0, 30);
  u8g2.print(theTemp);
  u8g2.print("*C");
  u8g2.sendBuffer();                  // transfer internal memory to the display
}