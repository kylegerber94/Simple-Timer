#ifndef SimpleTimer_h
#define SimpleTimer_h

class SimpleTimer {
  public:
    SimpleTimer(unsigned long);
    bool check(void);
    void setInterval(unsigned long);
    unsigned long getInterval(void);
    float getIntervalSeconds(void);
  private:
    unsigned long interval;
    unsigned long timer;
};

#endif
