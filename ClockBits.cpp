/*
  ClockBits.cpp - Library for clock bits.
  Created and started by Wim Cranen, December 13, 2018.
  Version 1.0 initial release.
*/

// for basic declarations and functions
#include <Arduino.h>
#include "ClockBits.h"

// Constructor
// Function that handles the creation and setup of instances
ClockBits::ClockBits(bool dummy){
	// Do whatever is required to initialize the library
	_dummy = dummy;
}

// Public methods
////////////////////////////////////////////////////////////////////
// Functions available in wiring sketches, this library, and other libraries
/*------------------------------------------------------------------------------------------------+
| Function    : P2000ms                                                                           |
| Returnvalue : bool is HIGH every 1000ms for a duration of 1000ms                                |
| Description : Create a clock bit with a frequency of 0.5Hz, duty cycle is 50%                   |
| Version     : v1.0 - Wim Cranen - Initial release                                               |
| History     : v1.0 - 13 dec 2018                                                                |
+------------------------------------------------------------------------------------------------*/
bool ClockBits::P2000ms(void) {
	// 2000 / 2 = 1000ms cycle time by 50% duty cycle
	if (currMillis - prevMillis2000ms >= 1000) {
		P2000Out = !P2000Out;
	}
	// return output
	return P2000Out;
}

/*------------------------------------------------------------------------------------------------+
| Function    : P1000ms                                                                           |
| Returnvalue : bool is HIGH every 500ms for a duration of 500ms                                  |
| Description : Create a clock bit with a frequency of 1Hz, duty cycle is 50%                     |
| Version     : v1.0 - Wim Cranen - Initial release                                               |
| History     : v1.0 - 13 dec 2018                                                                |
+------------------------------------------------------------------------------------------------*/
bool ClockBits::P1000ms(void) {
	// 1000 / 2 = 500ms cycle time by 50% duty cycle
	if (currMillis - prevMillis1000ms >= 500) {
		P1000Out = !P1000Out;
	}
	// return output
	return P1000Out;
}

/*------------------------------------------------------------------------------------------------+
| Function    : P500ms                                                                            |
| Returnvalue : bool is HIGH every 250ms for a duration of 250ms                                  |
| Description : Create a clock bit with a frequency of 2Hz, duty cycle is 50%                     |
| Version     : v1.0 - Wim Cranen - Initial release                                               |
| History     : v1.0 - 13 dec 2018                                                                |
+------------------------------------------------------------------------------------------------*/
bool ClockBits::P500ms(void) {
	// 500 / 2 = 250ms cycle time by 50% duty cycle
	if (currMillis - prevMillis500ms >= 250) {
		P500Out = !P500Out;
	}
	// return output
	return P500Out;
}

/*------------------------------------------------------------------------------------------------+
| Function    : P200ms                                                                            |
| Returnvalue : bool is HIGH every 100ms for a duration of 100ms                                  |
| Description : Create a clock bit with a frequency of 5Hz, duty cycle is 50%                     |
| Version     : v1.0 - Wim Cranen - Initial release                                               |
| History     : v1.0 - 13 dec 2018                                                                |
+------------------------------------------------------------------------------------------------*/
bool ClockBits::P200ms(void) {
	// 200 / 2 = 100ms cycle time by 50% duty cycle
	if (currMillis - prevMillis200ms >= 100) {
		P200Out = !P200Out;
	}
	// return output
	return P200Out;
}

/*------------------------------------------------------------------------------------------------+
| Function    : P100ms                                                                            |
| Returnvalue : bool is HIGH every 50ms for a duration of 50ms                                    |
| Description : Create a clock bit with a frequency of 10Hz, duty cycle is 50%                    |
| Version     : v1.0 - Wim Cranen - Initial release                                               |
| History     : v1.0 - 13 dec 2018                                                                |
+------------------------------------------------------------------------------------------------*/
bool ClockBits::P100ms(void) {
	// 100 / 2 = 50ms cycle time by 50% duty cycle
	if (currMillis - prevMillis100ms >= 50) {
		P100Out = !P100Out;
	}
	// return output
	return P100Out;
}
