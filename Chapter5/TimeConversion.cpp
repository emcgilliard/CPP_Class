/******************************************************************************
Author: Eric McGilliard
Email Address: emcgilliard@gmail.com
Chapter 5, Programming Project #1 
Description: This program will convert 24 hr time to 12 hr time 
Last Changed: 04/11/2018
*******************************************************************************/

#include <iostream>

using namespace std;

//Set constants

//Function declarations
void getTime(int& hours, int& mins);                                //asks the user for the cost of the home
void convertTime(int& hours, int mins, char& am_pm);                //convert to 12 hour notation
void displayResult(int hours, int mins, char am_pm, char& loop);    //convert to 12 hour notation


int main()
{
    //Declare vars for hours, mins, and am/pm
    int hours, mins;
    char am_pm, loop;
    
    do 
    {
        //function call to get time, convert to 12 hr, and display results 
        getTime(hours, mins);                     //Get the time from the user
        convertTime(hours, mins, am_pm);          //Convert the time to 12 hour format
        displayResult(hours, mins, am_pm, loop);
    }
    while (loop == 'Y' || loop == 'y');
    
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
    if(hours > 12 and hours != 24 ) {
      // if condition is true, set am_pm to P and subtract 12 from the hours
      am_pm = 'P';
      hours = (hours - 12);
   } else {
      // if condition is false, set am_pm to A
      am_pm = 'A';
   }
}

/******************************************************************************
Display the result of the conversion, ask if the user wants to repeat
*****************************************************************************/
void displayResult(int hours, int mins, char am_pm, char& loop)
{
    //display result
    cout << "In 12 hr notation, the time would be: " << hours << ":" << mins << " " << am_pm << endl;
    
    //Ask if the user wants to repeat the calculation
    cout << "Do you want to do another calculation? (Y for Yes)";
    cin >> loop;
}


