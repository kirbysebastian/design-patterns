#ifndef __IOBSERVER_HPP__
#define __IOBSERVER_HPP__

#include <memory>

class IObserver
{
public:
    virtual void update() = 0;
};

typedef std::shared_ptr<IObserver> IObserverPtr;

#endif  // __IOBSERVER_HPP__

