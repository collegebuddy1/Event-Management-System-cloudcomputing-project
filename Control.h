#ifndef CONTROL_H
#define CONTROL_H
#include "View.h"
#include "Calender.h"
#include "EventServer.h"
#include "WorkEvent.h"
#include "SchoolEvent.h"
using namespace std;
class Control{

    public:
    
    Control();
    ~Control();
    
    void launch();

    private:
    Calender schoolCalender, workCalender;
    View view;
    EventServer eServer;

};

#endif

