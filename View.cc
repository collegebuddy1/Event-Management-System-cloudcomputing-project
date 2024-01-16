#include <iostream>
#include "Date.h"
#include "Event.h"
#include "Calender.h"
#include "View.h"
#include <string.h>

using namespace std;


/*
  Function:  Prints main menu
  Purpose:   To print main menu and return integer value based on decision 
  Parameters:
    
*/

int View::mainMenu(){

     int numOptions = 1;
    int selection  = -1;

    cout << endl;
    cout << "(1) Add event" << endl;
    cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;

}

/*
  Function:  readEvent
  Purpose:   To read user input on event 
  Parameters:
    inout event name
    inout day
    inout month
    inout year
    inout hour
    inout minutes
    inout seconds
    inout priority
    
*/

void View::readEvent(string &eventName,int &day,int &month,int &year, int &hour,int &minutes,int &priority){
      cout << "Event name: ";
      cin.ignore();
      getline(cin,eventName);
      cout << "day:   ";
      cin  >> day;
      cout << "month: ";
      cin  >> month;
      cout << "year:  ";
      cin  >> year;
      cout << "hour:   ";
      cin  >> hour;
      cout << "minutes: ";
      cin  >> minutes;
      cout << "prioritys:  ";
      cin  >> priority; 

}

/*
  Function: printCalender
  Purpose:   To print calender 
  Parameters:
     out calender
    
*/

void View::printCalender(Calender &cal) const {
    cal.print();
}



/*
  Function:  readTypeofEent
  Purpose:   to read weather the user input is school or work
  Parameters:
    
*/

int View::readTypeofEvent(){


    string answer;
    while (true){
    cout << "School or Work Type Event?";
    cin >> answer;
    if (answer == "School"){
      return 0;
    }
    else if (answer == "Work"){
      return 1;
    }
    
    }

}