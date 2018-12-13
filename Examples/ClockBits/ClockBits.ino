// include library
#include <ClockBits.h>

// create test bools
bool dummy;
bool t2000;   	// periode is 2000ms is 0.5 Hz
bool t1000;     // periode is 1000ms is 1 Hz
bool t500;      // periode is 500ms is 2 Hz
bool t200;      // periode is 200ms is 5 Hz
bool t100;      // periode is 100ms is 10 Hz

// define switch
ClockBits Ticks(dummy);

void setup() {
}

void loop() {
  // output clock bits
  t2000 = Ticks.P2000ms();
  t1000 = Ticks.P1000ms();
  t500  = Ticks.P500ms();
  t200  = Ticks.P200ms();
  t100  = Ticks.P100ms();
}
