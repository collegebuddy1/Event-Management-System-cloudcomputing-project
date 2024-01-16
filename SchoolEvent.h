#ifndef SCHOOLEVENT_H
#define SCHOOLEVENT_H
#include <string.h>
#include "Event.h"

using namespace std;

class SchoolEvent: public Event{
    public:
        SchoolEvent(string = "Unknown", int = 0);
        bool operator<(Event*);
};

#endif