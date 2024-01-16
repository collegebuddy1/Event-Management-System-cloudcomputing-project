#ifndef VIEW_H
#define VIEW_H
#include "Calender.h"
using namespace std;
class View{
    public:
    int mainMenu();
    void readEvent(string &eventName,int &day,int &month,int &year, int &hour,int &minutes,int &priority);
    void printCalender(Calender &cal) const;
    int readTypeofEvent();
};

#endif