/*
BlinkToggle.ino
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
  /* Optional: Set LED brightness value (0-255). This works only if a PWM
  capable pin is used. Otherwise, the LED will light at values above 127. The
  default brightness value is set to 255. */
  //led.setValue(128);

  /* Optional: Same as above except brightness value is defined in percentage
  (0-100). The default brightness value is set to 100%. */
  //led.setPercent(51);
}

void loop() {
  /* Use the toggle() method to turn on/off the LED depending of its current
  state. */
  led.toggle();
  delay(1000);
}
