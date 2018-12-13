# ClockBits

Arduino - Library for digital clock bits.

Created and started by Wim Cranen, December 13, 2018.

Version 1.0 initial release.

#### Functions:
- bool P2000ms();
- bool P1000ms();
- bool P500ms();
- bool P200ms();
- bool P100ms();

#### Input variables:
- bool dummy (bool for dummy input)

#### Definition example:
ClockBits Ticks(dummy);

#### Usage example:
- bool = t2000 = Ticks.P2000ms();
- bool = t1000 = Ticks.P1000ms();
- bool = t500  = Ticks.P500ms();
- bool = t200  = Ticks.P200ms();
- bool = t100  = Ticks.P100ms();

## Function descriptions:
### P2000ms()
Create a clock bit with a frequency of 0.5Hz, duty cycle is 50%

Returns a bool that is HIGH every 1000ms for a duration of 1000ms, then LOW for the same duration.
### P1000ms()
Create a clock bit with a frequency of 1Hz, duty cycle is 50%

Returns a bool that is HIGH every 500ms for a duration of 500ms, then LOW for the same duration.
### P500ms()
Create a clock bit with a frequency of 2Hz, duty cycle is 50%

Returns a bool that is HIGH every 250ms for a duration of 250ms, then LOW for the same duration.
### P200ms()
Create a clock bit with a frequency of 5Hz, duty cycle is 50%

Returns a bool that is HIGH every 100ms for a duration of 100ms, then LOW for the same duration.
### P100ms()
Create a clock bit with a frequency of 10Hz, duty cycle is 50%

Returns a bool that is HIGH every 50ms for a duration of 50ms, then LOW for the same duration.
