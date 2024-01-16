#include "WorkEvent.h"
#include <string.h>
#include <iostream>

using namespace std;

WorkEvent::WorkEvent(string s, int p): Event(s,p){

}

bool WorkEvent::operator<(Event*e){
    return (getPriority() < e->getPriority());
}


