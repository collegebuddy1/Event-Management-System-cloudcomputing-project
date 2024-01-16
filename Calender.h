#ifndef CALENDER_H
#define CALENDER_H
#include <string.h>
using namespace std;
#define MAX 128
#include "Event.h"
#include "List.h"
#include "Array.h"


class Calender
{
    public:
        Calender(string = "unknown");
        ~Calender();
        void addEvent(Event*);
        void print();
        void copyEvents(Array&);

    private:
        string calName;
        int numEvents;
        List<Event*> l;

};

#endif