/*
  Author: 
  Learning Intention: The students will learn about configuring PINs and how to write binary data to a specific PIN.
  Success Criteria:
    1. I understand how to configure a PIN for outputting data
    2. I know how to write binary data to a specific PIN
    3. I can change the value in the delay method to change time
    4. I understand that LOW = false = 0 = <1.5 volts (or Off) and that HIGH = true = 1 = >3 volts (or On)
    5. I can create and correctly wire a LED in TINKERCAD and prototype my code
    6. I understand that a resistor is needed to reduce the voltage for the LED
    7. I understand what 'static' means before the int declaration
    9. I can apply this knowledge to the LED & Buzzer in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
    https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
    https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-serial-plotter
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/03.digitalWrite/LED_Schedmatic.png

*/

static unsigned int myLED = 8;
bool myToggle = false;
static unsigned int myBoardLED = 13;

void setup() {
  Serial.begin(9600);
  Serial.println("Configured to 9600");
  Serial.println("__________________");
  pinMode(myLED, OUTPUT); //configure pin for output
  pinMode(myBoardLED, OUTPUT); //board pin led?
}

void loop() {
  myToggle = !myToggle;
  digitalWrite(myLED, myToggle);
  digitalWrite(myBoardLED, !myToggle); //it works 
  delay(1000);
}