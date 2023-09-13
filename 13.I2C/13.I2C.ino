/*
  Author: Xavier Pritchett
  Learning Intention:
  The students will learn to use the I2C communication protocol to send and receive
  data with 2IC sensors and actuators

  Success Criteria:
    1.  I understand that I2C is a communication protocol
    2.  I understand that each I2C needs it's own I2C Channel
    3.  I understand that communicating to I2C modules is similar to the serial monitor
    4.  I understand I need to include the `wire-h` library
    5.  I understand that I need to look at the documentation and example code for each I2C module
    6.  I can sucessfully send data to the I2C OLED display
    7.  I can successfully receive data from either Temperature & Humidity Sensor, Air pressure Sensor or Acceleration Sensor in the sensor kit.

  Student Notes:
   
  Documentation:
    https://www.arduino.cc/reference/en/language/functions/communication/wire/


  Examples:
    OLED: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/0.96_OLED_Display/0.96_OLED_Display.ino
    3 Axis: Acceleromter: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/3_Axis_Accel_Sensor/3_Axis_Accel_Sensor.ino
    Temperature & Humidity: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/Temp_and_Humid_Sensor/Temp_and_Humid_Sensor.ino
    Air Pressure Sensor: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/Air_Pressure_Sensor/Air_Pressure_Sensor.ino
*/
// Includes for IC2 commm
#include <Arduino.h>
#include <Wire.h>

// include for OLED Display
#include <U8g2lib.h>

//Include for pressure sensor
#include "Seeed_BMP280.h"

//Instantialise pressure sensor
BMP280 mypresen;

//Config for OLED
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);  // High speed I2C

void setup() {
  //OLED Communication 
  u8g2.begin();

//setup and debut pressure sensor
    Serial.begin(9600);
  if(!mypresen.init()){
    Serial.println("Device error!");
  }

}

void loop() {

/* Serial.print("Temp: ");
  Serial.print(mypresen.getTemperature());
  Serial.println("C"); // The unit for  Celsius because original arduino doesn't support special symbols

float myTemp = mypresen.getTemperature();
*/ //this shall not go to waste
updateOLED(sampletemp());

}
