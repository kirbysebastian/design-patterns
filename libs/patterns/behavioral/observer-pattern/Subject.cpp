#include <algorithm>

#include "Subject.hpp"

Subject::~Subject()
{
    observers_.clear();
}

void Subject::registerObserver(IObserverPtr observer)
{
    if (std::find(observers_.begin(), observers_.end(), observer) == observers_.end())
    {
        observers_.push_back(observer);
    }
}

void Subject::unregisterObserver(IObserverPtr observer)
{
    auto iter = std::remove(observers_.begin(), observers_.end(), observer);
    observers_.erase(iter, observers_.end());
}

void Subject::notifyObservers() const
{
    for (const auto& observer : observers_)
    {
        observer->update();
    }
}

