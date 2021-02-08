#ifndef __SECONDS_HPP__
#define __SECONDS_HPP__

#include "observer-pattern/Subject.hpp"

class Seconds : public Subject
{
public:
    Seconds();

    void setTime(unsigned int tsec);

private:
    unsigned int tsec_;
};

#endif  // __SECONDS_HPP__