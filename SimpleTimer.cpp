#include "Arduino.h"
#include "SimpleTimer.h"

SimpleTimer::SimpleTimer(float intervalMillis) {
  setInterval(intervalMillis);
  timer = 0;
  enabled = false;
}

void SimpleTimer::disable(void) {
  enable(false);
}

void SimpleTimer::enable(void) {
  enable(true);
}

void SimpleTimer::enable(bool enable) {
  enabled = enable;
}

bool SimpleTimer::isEnabled(void) {
  return enabled;
}

void SimpleTimer::reset(void) {
  timer = micros();
}

float SimpleTimer::getInterval(void) {
  return intervalMillis;
}

float SimpleTimer::getIntervalSeconds(void) {
  return getInterval() / 1000.0;
}

float SimpleTimer::getIntervalMicros(void) {
  return intervalMicros;
}

void SimpleTimer::setInterval(float intervalMillis) {
  this->intervalMillis = intervalMillis;
  intervalMicros = intervalMillis * 1000;
}

bool SimpleTimer::check(void) {
  if (enabled && micros() - timer > intervalMicros) {
    reset();
    return true;
  }
  return false;
}
