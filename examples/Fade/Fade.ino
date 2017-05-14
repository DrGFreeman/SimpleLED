/*
Fade.ino
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

#include <SimpleLED.h>

// Declare SimpleLED type object with pin number as argument
SimpleLED led(13);

void setup() {
}

void loop() {
  for (int i = 0; i < 255; i++)
  {
    // Use the onValue() method to turn on the LED to a set brightness value
    led.onValue(i);
    delay(10);
  }
  for (int i = 255; i > 0; i--)
  {
    // An alternative way is to use the setValue() and on() methods
    led.setValue(i);
    led.on();
    delay(10);
  }
  // Use the off() method to turn the LED off
  led.off();
  delay(100);
}
