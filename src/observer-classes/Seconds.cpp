#include "Seconds.hpp"

Seconds::Seconds() : tsec_(0)
{}

void Seconds::setTime(unsigned int tsec)
{
    tsec_ = tsec;

    if (tsec_ % 3 == 0 && tsec_ % 5 == 0)
        notifyObservers();
}