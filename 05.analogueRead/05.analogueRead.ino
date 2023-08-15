/*
  Author: 
  Learning Intention: The students will learn how to wire a variable resistor as a pseudo sensor and read analogue data from that PIN.
  Success Criteria:
    1. I can wire a variable resistor in TINKERCAD
    2. I know how to read analogue data from a specific PIN
    3. I know the range of analogue data
    4. I can organise output data so it correctly plots on the serial monitor
    5. I can apply this knowledge to the Light, Sound and Rotary Potentiometer in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/05.serialRead/Bootcamp-serialRead.png
*/

static unsigned int myPOT = A0;
static unsigned int lightSensor = A1;
static unsigned int soundSensor = A2;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial is configured to 9600.");
  Serial.println("-----------------------------");
}

void loop() {
  unsigned int POTval = analogRead(myPOT);
  unsigned int litval = analogRead(lightSensor);
  unsigned int sndval = analogRead(soundSensor);
  Serial.print("myPOT:");
  Serial.print(POTval);
  Serial.print(" ");
  Serial.print("lightSensor:");
  Serial.print(litval);
  Serial.print(" ");
  Serial.print("soundSensor:");
  Serial.print(sndval);
  Serial.println();
}