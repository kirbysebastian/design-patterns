#ifndef __ISUBJECT_HPP__
#define __ISUBJECT_HPP__

#include "IObserver.hpp"

class ISubject
{
public:
    virtual void registerObserver(IObserverPtr) = 0;
    virtual void unregisterObserver(IObserverPtr) = 0;

    virtual void notifyObservers() const = 0;
};

typedef std::shared_ptr<ISubject> ISubjectPtr;

#endif  // __ISUBJECT_HPP__

