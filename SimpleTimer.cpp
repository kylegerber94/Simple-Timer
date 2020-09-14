#include "Arduino.h"
#include "SimpleTimer.h"

SimpleTimer::SimpleTimer(float intervalMillis) {
  setInterval(intervalMillis);
  timer = 0;
}

float SimpleTimer::getInterval(void) {
  return intervalMillis;
}

float SimpleTimer::getIntervalSeconds(void) {
  return (float)getInterval() / 1000.0;
}

float SimpleTimer::getIntervalMicros(void) {
  return intervalMicros;
}

void SimpleTimer::setInterval(float intervalMillis) {
  this->intervalMillis = intervalMillis;
  intervalMicros = intervalMillis * 1000;
}

bool SimpleTimer::check(void) {
  if (micros() - timer > intervalMicros) {
    timer = micros();
    return true;
  }
  return false;
}
