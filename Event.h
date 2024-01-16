#ifndef EVENT_H
#define EVENT_H
#include <string>
using namespace std;
#include "Date.h"




class Event
{
    public:
     Event(string = "unknown",int = 0);
     virtual ~Event();
     void print();
     Date& getEventDate();
     int getPriority();
     void setDate(int,int,int,int,int);
     virtual bool operator<(Event*) = 0;;
    
    protected:
     string eventName;
     string eventDate;
     Date d;
     int priority;
};
#endif