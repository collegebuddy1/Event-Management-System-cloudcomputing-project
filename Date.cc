#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "Date.h"

Date::Date(int d, int m, int y)
{
  set(d, m, y, 0, 0);

}

Date::~Date()
{
}


void Date::set(int d,int m,int y,int h,int min)
{
  
  year  = ( ( y > 0) ? y : 0 );
  month = ( ( m > 0 && m <= 12) ? m : 0 );
  day   = ( ( d > 0 && d <= lastDayInMonth() ) ? d : 0 );
  t.set(h,min,0);
}

void Date::printShort()
{
  //setfill to add 0 and setw the max space
  cout<<setfill('0')<<setw(2)<<day<<"/"
      <<setfill('0')<<setw(2)<<month<<"/"
      <<setfill('0')<<setw(4)<<year<<endl;
      t.print();
    
}

void Date::printLong() 
{
  cout<<getMonthStr()<<" "<<day<<", "<<year<<endl;
  t.print();
  
}


/* Function: 
   Purpose : To compare if the date object is less than another date

   Parameter: 
   In : The reference of the date object
   Out : If the date object is less than the other date object that is passed by reference
   return true if the current date is less then the other date object 
   return false if it is not 
*/


bool Date::operator<(Date& d){
  if (year < d.year){
  return true;
}
else if (year == d.year){
  if (month < d.month){
    return true;
  }
  else if (month == d.month){
    if (day < d.day){
      return true;
  }
    else if(day == d.day){
       return t < d.t;
    }
  
  }

}
return false;
}



int Date::lastDayInMonth()
{
  switch(month)
  {
    case 2:
      if (leapYear())
        return 29;
      else
        return 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      return 30;
  }
}

bool Date::leapYear()
{
  if ( year%400 == 0 ||
       (year%4 == 0 && year%100 != 0) )
    return true;
  else
    return false;
}

string Date::getMonthStr() 
{
  string monthStrings[] = { 
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December" };

  if ( month >= 1 && month <= 12 )
    return monthStrings[month-1];
  else
    return "Unknown";
}

