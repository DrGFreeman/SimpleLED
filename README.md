# SimpleLED

A library for the Adruino IDE providing different methods for easy control of LEDs.

Version 0.0.1  
[![Build Status](https://travis-ci.org/DrGFreeman/SimpleLED.svg?branch=master)](https://travis-ci.org/DrGFreeman/SimpleLED)  
By Julien de la Bruère-Terreault (drgfreeman@tuta.io)

## Summary

This library for the Arduino IDE provides different methods for easy control of LEDs.

## Examples
Three example sketches are provided with the library:
* _BlinkOnOff.ino_  
This example shows how to use the `.on()` and `.off()` methods to blink a LED in a heartbeat style.

* _BlinkToggle.ino_  
This example shows how to use the `.toggle()` method to blink a LED with a single command.

* _Fade.ino_  
This example shows how to use the `.onValue()` method or `.setValue()` and `.on()` methods to fade a LED.

## Library reference

* `SimpleLED(uint8_t pin)`  
Constructor. `pin` is the Arduino pin to which the LED is connected*. The constructor sets the default brightness value to 255.

* `bool getState()`  
Returns `True` (1) if the LED is on and `False` (0) if the LED is off.

* `uint8_t getValue()`  
Returns the brightness value of the LED (0-255). Note that the brightness value parameter is independent of the LED state. It defines the brightness value to use when the `.on()` or `.toggle()` methods are called and does not change when the `.off()` method is called.

* `void on()`  
Turns the LED on to full brightness or to the brightness value previously set by the `.setValue()`, `.setPercent()` or `.onValue()` methods.

* `void onPercent(uint8_t percent)`  
Turns the LED on to the brightness value defined by the `percent` argument (0-100).

* `void onValue(uint8_t value)`  
Turns the LED on to the brightness value defined by the `value` argument (0-255).

* `void off()`  
Turns the LED off.

* `void setPercent(uint8_t percent)`  
Sets the brightness value the LED will light upon the next call to the `.on()` or `.toggle()` methods to the value defined by the `percent` argument (0-100).

* `void setValue(uint8_t value)`  
Sets the brightness value the LED will light upon the next call to the `.on()` or `.toggle()` methods to the value defined by the `value` argument (0-255).

* `void toggle()`  
Turns on of off the LED as function of its current state. If the LED is on, `.toggle()` will turn it off. If the LED is off, `.toggle()` will turn it on to the brightness value previously set by the `.setValue()`, `.setPercent()` or `.onValue()` methods.

\* Brightness values defined with `onValue()`, `onPercent()`, `setValue()` and `setPercent()` methods will only work if a PWM capable pin is used. LEDs connected to non PWM capable pins will light at brightness values above 127 or percent values above 50%. By default, the brightness value is set to 255 (100%).

## Version history

* 0.0.1 (2017-05-13) Initial version
