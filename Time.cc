#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Time.h"


//Declaring arugment constructor
Time::Time(int h, int m, int s)
{
  //Using set function to set constructors
  set(h, m, s);
}

void Time::set(int h,int m,int s)
{
  //If h is between 0 and 24 then display h other display 0
  hours   = ( h >= 0 && h < 24) ? h : 0;
  minutes = ( m >= 0 && m < 60) ? m : 0;
  seconds = ( s >= 0 && s < 60) ? s : 0;
  
}

//Returns value
int Time::convertToSecs()
{
  return (hours*3600 + minutes*60 + seconds);

}

void Time::print()
{
  cout<<setfill('0')<<setw(2)<<hours<<":"
      <<setfill('0')<<setw(2)<<minutes<<":"
      <<setfill('0')<<setw(2)<<seconds<<endl;
}


bool Time::operator < (Time& t){
  return convertToSecs() < t.convertToSecs();
}




