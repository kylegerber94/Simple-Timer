#ifndef SimpleTimer_h
#define SimpleTimer_h

class SimpleTimer {
  public:
    SimpleTimer(float);
    bool check(void);
    void disable(void);
    void enable(bool);
    void enable(void);
    bool isEnabled(void);
    void setInterval(float);
    float getInterval(void);
    float getIntervalMicros(void);
    float getIntervalSeconds(void);
    void reset (void);
  private:
    float intervalMillis;
    float intervalMicros;
    float timer;
    bool enabled;
};

#endif
