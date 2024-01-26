//Esp32 
// ESP32 code that sends the message to the arduino uno
#include <HardwareSerial.h>
void setup() {
  Serial.begin(9600, SERIAL_8N1, 3, 1);
  delay(100);
}
void loop()
{
    String mssage = "Hallo";

    Serial.println(mssage);
    delay(500);
}
