#ifndef DATE_H
#define DATE_H
using namespace std;
#include "Time.h"


class Date
{
  public:
    Date(int=0, int=0, int=2000);  
    ~Date();
    void set(int,int,int,int,int);
    void printShort();
    void printLong();
    bool operator<(Date&);

  private:
    int day;
    int month;
    int year;
    Time t;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr();
};

#endif
