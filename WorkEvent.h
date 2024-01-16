#ifndef WORKEVENT_H
#define WORKEVENT_H
#include <string.h>
#include "Event.h"

using namespace std;

class WorkEvent: public Event{
    public:
        WorkEvent(string = "Unknown", int = 0);
        bool operator<(Event*);
    
};

#endif