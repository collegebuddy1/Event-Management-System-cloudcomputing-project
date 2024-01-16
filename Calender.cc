
#include <iomanip>
#include <iostream>
#include "Calender.h"
#define MAX_ARR_SIZE 128
using namespace std;


Calender::Calender(string name){
    calName = name;
    numEvents = 0;
    
}
Calender::~Calender(){

}

/* Function: 
   Purpose : To add event to calender
   Parameter: 
   In : Event *e
*/

void Calender::addEvent(Event*e){
        l.add(e);

}

/* Function: 
   Purpose : To print events in calender
   Parameter: None
*/
void Calender::print(){
        l.print();
        cout << "\n";
}


/* Function: 
   Purpose : To copy Event into an array from the traversed list
   Parameter: in Array
*/

void Calender::copyEvents(Array& a){
        l.copy(a);
}