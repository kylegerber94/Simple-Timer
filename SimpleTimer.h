#ifndef SimpleTimer_h
#define SimpleTimer_h

class SimpleTimer {
  public:
    SimpleTimer(float);
    bool check(void);
    void setInterval(float);
    float getInterval(void);
    float getIntervalMicros(void);
    float getIntervalSeconds(void);
  private:
    float intervalMillis;
    float intervalMicros;
    float timer;
};

#endif
