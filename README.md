# Radio

_A simple Arduino-based radio receiver using the TEA5767 Radio module._

## Overview

This project demonstrates how to set up and control a self radio receptor using the TEA5767 Radio module with an Arduino. The frequency can be adjusted through serial commands.

## Requirements

- Arduino board
- TEA5767 Radio module
- Arduino IDE

## Installation

1. **Connect the TEA5767 Radio Module:**

   - Connect the TEA5767 module to the Arduino as per the module's pin configuration. Typically, the connections are as follows:
     |TEA5767|Arduino|
     |:-----:|:-----:|
     |SDA|SDA|
     |SCL|SCL|
     |+5V|5V|
     |GND|GND|

2. **Install the TEA5767Radio Library:**
   - Open the Arduino IDE.
   - Go to Sketch -> Include Library -> Manage Libraries.
   - Search for "TEA5767Radio" and install it.

3. **Use the code**

## Usage
1. **Power the Arduino:**
   - Once the code is uploaded, power the Arduino. The serial monitor will display [Loading...] and then show the current frequency.

2. **Set Frequency via Serial:**
   - Open the Serial Monitor in the Arduino IDE (``Tools -> Serial Monitor``).
   - Set the baud rate to ``9600``.
   - To set a new frequency, type ``set:`` followed by the desired frequency, e.g., ``set:109.6``, and press ``Enter``.

## Commands
|command|description|Example|
|-|-|-|
|``set:``|Set frequency|``set:109.6``|