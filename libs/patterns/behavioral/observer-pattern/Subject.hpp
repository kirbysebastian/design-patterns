#ifndef __SUBJECT_HPP__
#define __SUBJECT_HPP__

#include <vector>

#include "ISubject.hpp"

class Subject : public ISubject
{
public:
    ~Subject();

    virtual void registerObserver(IObserverPtr);
    virtual void unregisterObserver(IObserverPtr);

    virtual void notifyObservers() const;

private:

    std::vector<IObserverPtr> observers_;
};

#endif  // __SUBJECT_HPP__