#ifndef _MultiBitDebouncer_h_
#define _MultiBitDebouncer_h_

// #include <Arduino.h>

class MultiBitDebouncer {
  public:
    MultiBitDebouncer(unsigned long size, unsigned long timeout, unsigned long (*timeFunction)());
    ~MultiBitDebouncer();
  
  private:
    unsigned long size;
    unsigned long timeout;
    unsigned long (*timeFunction)();
    unsigned long byteCount;
    unsigned long *lastChange;
    unsigned char *state;
    unsigned char *lastState;
    unsigned char *changed;


};





#endif
