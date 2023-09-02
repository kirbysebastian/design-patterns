#include <iostream>

// Applications
#include "factorymethod/ApplianceHardware.hpp"
#include "IApplication.hpp"

/*
#include "observer-classes/Seconds.hpp"
#include "observer-classes/TimeObserver.hpp"
*/

/*
#include "creational/singleton-pattern/Database.hpp"
Database* Database::dbPtr = nullptr;
*/

int main()
{
	factorymethod::ApplianceHardware applianceHW;
	applianceHW.run();
    /*
     * ================OBSERVER PATTERN================
     *
    std::shared_ptr<Seconds> sPtr = std::make_shared<Seconds>();
    std::shared_ptr<TimeObserver> tObsPtr = std::make_shared<TimeObserver>();
    std::shared_ptr<TimeObserver> t2ObsPtr = std::make_shared<TimeObserver>();
    sPtr->registerObserver(tObsPtr);
    sPtr->registerObserver(t2ObsPtr);

    int time = 0;

        std::cout << "\nEnter current time in seconds: ";
        std::cin >> time;
        sPtr->setTime(time);

    sPtr->unregisterObserver(tObsPtr);
    std::cout << "\nEnter current time in seconds: ";
    std::cin >> time;
    sPtr->setTime(time);
     *
     * ================OBSERVER PATTERN================
     */
/*
    Database* dbPtr = Database::getInstance();
    std::cout << dbPtr->getName() << "\n";
    dbPtr->store("Pevidal");
    dbPtr->store("Sebastian");
    dbPtr->store("Paolo");
    dbPtr->store("KP");

    Database* newPtr = Database::getInstance();
    std::cout << "NewPTR DB Size: " << newPtr->size() << "\n";
    newPtr->remove("Sebastian");
    newPtr->printDB();

    std::cout << "DBPTR Size: " << dbPtr->size() << "\n";

    dbPtr->printDB();
    newPtr->remove("Pevidal");
    dbPtr->printDB();
*/

    return 0;
}
