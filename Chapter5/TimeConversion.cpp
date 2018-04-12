/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//Set constants

//Function declarations
void getTime(int& hours, int& mins);                   //asks the user for the cost of the home
void convertTime(int& hours, int mins, char& am_pm);    //convert to 12 hour notation

int main()
{
    int hours, mins;
    char am_pm;
    

    getTime(hours, mins);                     //Get the time from the user
    convertTime(hours, mins, am_pm);          //Convert the time to 12 hour format
    
    
    
    //display input for debugging
    cout << hours << mins << am_pm;

    return 0;
}



/******************************************************************************
getTime asks the user to input the time (hours then minutes) and either AM or PM
*****************************************************************************/
void getTime(int& hours, int& mins)
{
    cout << "Please enter the hours in 24 hour notation (i.e. 13 for 1:00 PM): ";
    cin  >> hours;
    cout << "Please enter the minutes (i.e. 30 for 13:30): ";
    cin  >> mins;
}


/******************************************************************************
convertTime converts from 24hr to 12 hr notation
*****************************************************************************/
void convertTime(int& hours, int mins, char& am_pm)
{
    //Check for am or pm time, set char am_pm to
    if(hours > 12 ) {
      // if condition is true, set am_pm to P and subtract 12 from the hours
      am_pm = 'P';
      hours = (hours - 12);
   } else {
      // if condition is false, set am_pm to A
      am_pm = 'A';
   }
}
