/*
  ClockBits.h - Library for clock bits.
  Created and started by Wim Cranen, December 13, 2018.
  Released into the public domain.
*/

#ifndef ClockBits_h
#define ClockBits_h

#include "Arduino.h"

// Library interface description
class ClockBits {
	// user-accessible "public" inteface
	public:
		// DigitalFunctions with inputs:
		ClockBits(bool dummy);
		bool P2000ms(void);
		bool P1000ms(void);
		bool P500ms(void);
		bool P200ms(void);
		bool P100ms(void);

  // library-accassible "private" interface
  private:
    // Inputs of the DigitalFunctions class
	bool _dummy;
	unsigned long currMillis = millis();
	
	// P2000ms private variables
	unsigned long prevMillis2000ms;	// previous clock state
	bool P2000Out;					// return value
	
	// P1000ms private variables
	unsigned long prevMillis1000ms;	// previous clock state
	bool P1000Out;					// return value
	
	// P500ms private variables
	unsigned long prevMillis500ms;	// previous clock state
	bool P500Out;					// return value
	
	// P200ms private variables
	unsigned long prevMillis200ms;	// previous clock state
	bool P200Out;					// return value
    
	// P100ms private variables
	unsigned long prevMillis100ms;	// previous clock state
	bool P100Out;					// return value
	
	//void  DoSomeThingSecret(void);
};

#endif