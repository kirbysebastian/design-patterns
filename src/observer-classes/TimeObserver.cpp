#include <iostream>

#include "TimeObserver.hpp"

TimeObserver::TimeObserver() {}

void TimeObserver::update()
{
    std::cout << "\nTIME HAS BEEN UPDATED!\n";
}

