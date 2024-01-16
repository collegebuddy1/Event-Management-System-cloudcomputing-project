#include <iostream>
#include <iomanip>
#include "Control.h"
using namespace std;

Control::Control(){
    Array schoolEvents, workEvents;
    eServer.retrieve(schoolEvents, workEvents);

    for (int i = 0; i < schoolEvents.getSize(); i++){
        schoolCalender.addEvent(schoolEvents.get(i));
    }

     for (int i = 0; i < workEvents.getSize(); i++){
        workCalender.addEvent(workEvents.get(i));
    }

}

Control::~Control(){
    
    Array schoolEvents, workEvents;
    workCalender.copyEvents(workEvents);
    schoolCalender.copyEvents(schoolEvents);
    eServer.update(schoolEvents,workEvents);

}

void Control::launch(){
    int choice, day, month, year, hour, minutes,priority;
    string eventName;
    SchoolEvent *se;
    WorkEvent *we;
    int type;
    while(1){

        //Gets choice
        choice = view.mainMenu();

        if (choice == 1){

            //Type determines if it is a school or work event
            type = view.readTypeofEvent();
            view.readEvent(eventName,day,month,year,hour,minutes,priority);
            if (type == 0){

              se = new SchoolEvent(eventName,priority);

              se->setDate(day,month,year,hour,minutes);
              schoolCalender.addEvent(se);
            }

            else if (type == 1){

              we = new WorkEvent(eventName,priority);
              we->setDate(day,month,year,hour,minutes);
              workCalender.addEvent(we);

            }

        }
        else{
            break;
        }
    }

   cout << "\n<<<<<<<<<<<<< SCHOOL EVENTS >>>>>>>>>>>>>\n";
   view.printCalender(schoolCalender);

   cout << "\n<<<<<<<<<<<<< WORK EVENTS >>>>>>>>>>>>>\n";
   view.printCalender(workCalender);
}
