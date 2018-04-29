/******************************************************************************

This program reads in the average monthly rainfall for a city over the past 12 months, 
and then reads in the actual rainfall for each of the previous 12 months. A graph is output 
showing the actual rainfall for each month, as well as the difference compared to the actual

*******************************************************************************/

#include <iostream>
#include <cmath>
const int NUMBER_OF_MONTHS = 12;


void input_average(int a[], int last_month_number);
//Precondition: last_month_number is the declared size of array
//Postconidtion: For plant_number = 1 through last_plant_number: 
//a[last_month_number - 1] equals the average rainfill month number 


void input_actual(int a[], int last_month_number);
//Precondition: last_month_number is the declared size of array array
//Postconidtion: For month_number = 12 through last_month_number: 
//a[last_month_number - 1] equals the average rainfill month number 


void graph(const int asterisk_count[], int last_month_number, const int average_rainfall[]);
//Precondition: asteris_count hold the total rain for each of 12 months. last_month_number holds
//the size of the array, and average_rainfall holds the average for each of 12 months

void print_graph(int n);
//Prints n asterisks to the screen for each inch of rainfill


using namespace std;

int main()
{
    using namespace std; 
    int actual_rainfall[NUMBER_OF_MONTHS];
    int average_rainfall[NUMBER_OF_MONTHS];
    
    //Welcome Message
    cout << "This program displays a graph showing \n"
         << "rainfill for each month, as well as the\n"
         << "difference compared to the average rainfall\n";
         
    input_average(average_rainfall, NUMBER_OF_MONTHS);                 //get the average for each month
    input_actual(actual_rainfall, NUMBER_OF_MONTHS);                   //gets the actual for each month
    graph(actual_rainfall, NUMBER_OF_MONTHS, average_rainfall);        //display the graph and delta
    
    
    
    return 0;
}


////////////////////////////////////////////////////////////////////////////////
//Reads in the average rainfall for the previous 12 months
////////////////////////////////////////////////////////////////////////////////

//Uses io iostream
void input_average(int a[], int last_month_number)
{
    using namespace std; 
    for (int month_number = 1; month_number <= last_month_number; month_number++)
        {
            cout << endl
                 << "Enter the average rainfile for month number " << month_number <<":" << endl;
                 //Need to create a switch statement here
            cin  >> a[month_number -1];
        }
}


////////////////////////////////////////////////////////////////////////////////
//Reads in the actual rainfall for the previous 12 months. Uses io stream
////////////////////////////////////////////////////////////////////////////////

void input_actual(int a[], int last_month_number)
{
    using namespace std; 
    for (int month_number = 12; month_number >= 1; month_number--)
        {
            cout << endl
                 << "Enter the actual rainfile for month number " << month_number << ":" << endl;
            cin  >> a[month_number -1];
        }
}


////////////////////////////////////////////////////////////////////////////////
//Displays the actual rainfall for the previous 12 month using an asteris for each inch of rain.
//Also, display the difference versus the avera. uses iostream
////////////////////////////////////////////////////////////////////////////////

void graph(const int asterisk_count[], int last_month_number, const int average_rainfall[])
{
    using namespace std; 
    cout << "\nActual rainfall for the previous 12 months:\n";
    for (int month_number = 12; month_number >= 1; month_number--)
    {
        cout << "Month #" << month_number << " ";
        print_graph(asterisk_count[month_number - 1]);
        cout << "Difference vs. Average: " << asterisk_count[month_number] - average_rainfall[month_number];
        cout << endl;
    }
}

////////////////////////////////////////////////////////////////////////////////
//Prints one asteris for each inch of rain for a given month
////////////////////////////////////////////////////////////////////////////////

void print_graph(int n)
{
    using namespace std; 
    for (int count = 1; count <= n; count ++)
        cout << "*"; 
}
