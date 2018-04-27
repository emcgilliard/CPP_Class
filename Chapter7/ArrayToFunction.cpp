/******************************************************************************

//indexed variable to function

*******************************************************************************/

#include <iostream>
const int NUMBER_OF_EMPLOYEES = 3; 

int adjust_days(int old_days);
//Returns old days plus 5



using namespace std;

int main()
{
    using namespace std; 
    int vacation[NUMBER_OF_EMPLOYEES], number; 
    cout << "Enter allowed vaccation days for employees 1 through " << NUMBER_OF_EMPLOYEES << ":\n";
    
    for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
        cin >> vacation[number - 1];
    for (number = 0; number < NUMBER_OF_EMPLOYEES; number++)
        vacation[number] = adjust_days(vacation[number]);
    cout << "The revised number of vacation days is:\n";
    for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
        cout << "Employee number " << number    
             << " vacation days = " << vacation[number - 1] << endl; 

    return 0;
}

int adjust_days(int old_days)
{
    return (old_days + 5);
}
