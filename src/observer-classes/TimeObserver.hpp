#ifndef __TIME_OBSERVER_HPP__
#define __TIME_OBSERVER_HPP__

#include "behavioral/observer-pattern/IObserver.hpp"

class TimeObserver : public IObserver
{
public:
    TimeObserver();

    virtual void update();

private:

};

#endif  // __TIME_OBSERVER_HPP__

