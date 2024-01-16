#include "SchoolEvent.h"
#include <string.h>
#include <iostream>
using namespace std;

SchoolEvent::SchoolEvent(string s, int p): Event(s,p){

}


bool SchoolEvent::operator<(Event* e){
    return getEventDate() < e->getEventDate();
}