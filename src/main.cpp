#include <Arduino.h>

const int LED_PIN = 2;
const int BLINK_DELAY_FLASH_MS = 100;
const int BLINK_DELAY_PAUSE_MS = 800;
const long SERIAL_BAUD = 115200;  

void setup() {
  Serial.begin(SERIAL_BAUD);           
  Serial.println("SENTINEL is alive"); 
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_DELAY_FLASH_MS);
  digitalWrite(LED_PIN, LOW);
  delay(BLINK_DELAY_FLASH_MS);
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_DELAY_FLASH_MS);
  digitalWrite(LED_PIN, LOW);
  delay(BLINK_DELAY_PAUSE_MS);
  Serial.println("HEARTBEAT");          

}