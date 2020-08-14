#include "Arduino.h"
#include "SimpleTimer.h"

SimpleTimer::SimpleTimer(unsigned long interval) {
  setInterval(interval);
  timer = 0;
}

unsigned long SimpleTimer::getInterval(void) {
  return interval;
}

float SimpleTimer::getIntervalSeconds(void) {
  return (float)getInterval() / 1000000.0;
}

void SimpleTimer::setInterval(unsigned long interval) {
  this->interval = interval;
}

bool SimpleTimer::check(void) {
  if (micros() - timer > interval) {
    timer = micros();
    return true;
  }
  return false;
}
