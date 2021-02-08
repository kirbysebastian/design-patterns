#include <iostream>

#include "observer-classes/Seconds.hpp"
#include "observer-classes/TimeObserver.hpp"

int main()
{
    std::shared_ptr<Seconds> sPtr = std::make_shared<Seconds>();
    std::shared_ptr<TimeObserver> tObsPtr = std::make_shared<TimeObserver>();
    std::shared_ptr<TimeObserver> t2ObsPtr = std::make_shared<TimeObserver>();
    sPtr->registerObserver(tObsPtr);
    sPtr->registerObserver(t2ObsPtr);

    int time = 0;
/*    while (true)
    {*/
        std::cout << "\nEnter current time in seconds: ";
        std::cin >> time;
        sPtr->setTime(time);
/*    }*/
    sPtr->unregisterObserver(tObsPtr);
    std::cout << "\nEnter current time in seconds: ";
    std::cin >> time;
    sPtr->setTime(time);

    return 0;
}
