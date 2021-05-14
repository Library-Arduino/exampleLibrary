#ifndef TIMEP_H
#define TIMEP_H

#if ARDUINO > 100
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

class Timep
{
private:
    /* data */
public:
    Timep(/* args */) {}
    ~Timep() {}
    void delayp(unsigned long ms)
    {
        delay(ms);
    };
};

#endif