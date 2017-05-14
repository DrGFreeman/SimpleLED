/*
SimpleLED.cpp
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

// Constructor
SimpleLED::SimpleLED(const uint8_t pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  _state = 0;
  _value = 255;
}

// Return the LED state
bool SimpleLED::getState()
{
  if (_state)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

uint8_t SimpleLED::getValue()
{
  return _value;
}

void SimpleLED::on()
{
  analogWrite(_pin, _value);
  _state = 1;
}

void SimpleLED::onValue(uint8_t value)
{
  setValue(value);
  on();
}

void SimpleLED::onPercent(uint8_t percent)
{
  setPercent(percent);
  on();
}

void SimpleLED::off()
{
  analogWrite(_pin, 0);
  _state = 0;
}

void SimpleLED::setPercent(uint8_t percent)
{
  setValue(map(constrain(percent, 0, 100), 0, 100, 0, 255));
}

void SimpleLED::setValue(uint8_t value)
{
  _value = constrain(value, 0, 255);
}

void SimpleLED::toggle()
{
  if (_state)
  {
    off();
  }
  else
  {
    on();
  }
}
