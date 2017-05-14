/*
SimpleLED.h
Source: https://github.com/DrGFreeman/SimpleLED

MIT License

Copyright (c) 2017 Julien de la Bruere-Terreault <drgfreeman@tuta.io>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef SimpleLED_h
#define SimpleLED_h

#include <Arduino.h>

class SimpleLED
{
public:
  // Constructor
  SimpleLED(const uint8_t pin);

  // Return the LED state
  bool getState();

  // Return brightness value
  uint8_t getValue();

  // Turn LED on to brightness value specified by setValue() or default (255)
  void on();

  // Turn LED on to specified brightness value (0-255)
  void onValue(uint8_t value);

  // Turn LED on to specified brightness value in percent(0-100)
  void onPercent(uint8_t percent);

  // Turn LED off (brightness value stays in memory)
  void off();

  // Set brightness value in percent (0-100)
  void setPercent(uint8_t percent);

  // Set brightness value (0-255)
  void setValue(uint8_t value);

  // Toggle LED
  void toggle();

private:
  // LED pin
  uint8_t _pin;

  // LED state
  bool _state;

  // Brightness value
  uint8_t _value;
};

#endif
