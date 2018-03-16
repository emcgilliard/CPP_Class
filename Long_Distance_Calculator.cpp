/******************************************************************************

Author: Eric McGilliard
Email Address: emcgilliard@gmail.com
Chapter 3, Programming Project #1 

Description: This program will calculate the charge of a phone call placed at 
             various time of the day and on various days of the week. 

Last Changed: 03/07/2018

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    //Telephone rate charges
    const double WEEKEND_RATE   = 0.15;
    const double WEEKDAY_RATE   = 0.40; 
    const double WEEKNIGHT_RATE = 0.25; 
    
    
    //User input variables, initialized
    int callLength      = 0; 
    double totalCharge  = 0;
    double startTime    = 0;
    string dayOfWeek    = "Su";
    char loop           = 'Y';
   
do 
{
    
    //Welcome the user, ask for day of week
    cout <<"Welcome to the long distance cost calculator.\nPlease input the day the call began: "
         <<"(Please enter the day in this format: Mo, Tu, We, Th, Fr, Sa, Su)";
    cin >> dayOfWeek; 
    cout << "You entered: " << dayOfWeek << endl;
    
    
    //The day of week needs to be uppercased. I couldn't get this function to work properly
    //dayOfWeek = toupper('dayOfWeek');
    
    
    
    //Ask for the call duration
    cout << "Please enter the length of the call in minutes (use whole numbers): "; 
    cin  >> callLength; 
    cout <<"You entered: " << callLength << " minutes.\n";
    
    
    //Ask for the time the call started
    cout << "What time did the call start? (Use 24 hour format, i.e. 13:30 for 1:30 PM: "; 
    cin >> startTime;  //this is admittedly hacky, but keeping the start time as a double drops everything after the user enters :00
    cout << "You entered: " << startTime << endl;    
    
    //If statment checks for a weekend first, then prime time, otherwise the night rate is charged
    
        if ((dayOfWeek == "SA") || (dayOfWeek == "SU"))
        
             totalCharge = callLength * WEEKEND_RATE;
          
        
        else if ((startTime >= 6) && (startTime <18))
        
            totalCharge = callLength * WEEKDAY_RATE;
         
        else
        
             totalCharge = callLength * WEEKNIGHT_RATE;
          
    
    //Display the total charge to the user. Format to dollar/cent notation
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Your total charge is $" << totalCharge << endl;
    
    //Ask if the user wants to do another calculation. Something is up with the loop, I think there is an issue around the braces in the if-statement. 
    cout << "Do you want to perform another calculation? (Enter Y for Yes): ";
    
    cin >> loop;


} 
while (loop == 'Y' || loop == 'y');



    return 0;
}
