/**
   * @file radio.cpp
   * @brief A self radio receptor
   * github : https://github.com/kerogs/radio
   * @author Kerogs
   * @version 1.1.1
   * @date 07/02/2024
   * @copyright MIT
   */

#include <Wire.h>
#include <TEA5767Radio.h>

TEA5767Radio radio = TEA5767Radio();

float frequence = 106.4;

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("[Loading...]");

  Wire.begin();
  radio.setFrequency(frequence);
  Serial.print("Frequency set to : "); Serial.println(frequence);
}

void loop() {
  cliRadioSet();

  int val = analogRead(A1);
  Serial.println(val); 
}

void cliRadioSet() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input.startsWith("set:")) {
      String valueStr = input.substring(4);
      float value = valueStr.toFloat();    

      if (value > 0.0) {
        frequence = value;
        radio.setFrequency(frequence);
        Serial.print("Frequency set to: ");
        Serial.println(frequence);
      } else {
        Serial.println("Invalid frequency value.");
      }
    } else {
      Serial.println("Unknown command.");
    }
  }
}