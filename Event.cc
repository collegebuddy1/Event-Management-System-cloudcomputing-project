#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "Event.h"


Event::Event(string event,int p) : eventName(event) , priority(p){
}

Event::~Event(){
    
}
/* Function: 
   Purpose : To print event
   Parameter: None
*/

void Event::print(){
    
    cout << eventName << "\n" << "Number of priorites " << getPriority() << "\n" ;
    d.printLong();
}
/* Function: 
   Purpose : To get Event Object
   Parameter: None
   out : date reference object returned
*/

// Returns object Date
Date& Event::getEventDate(){
    return d;

}


/* Function: 
   Purpose : To get priority
   Parameter: None
   out : priority returned
*/

int Event::getPriority(){
    return priority;
}

/* Function: 
   Purpose : To set event date
   Parameter: 
   inout: takes in day
   inout: takes in month
   inout: takes in year
   inout: takes in hour
   inout: takes in min
   inout: takes second 
   returns nothing

   
*/

void Event::setDate(int day,int month, int year,int hour,int min){
  
    d.set(day,month,year,hour,min);

}

 
