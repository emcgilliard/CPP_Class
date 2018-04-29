/******************************************************************************

Reads data and displays a bar graph showing productivity for each plant

*******************************************************************************/

#include <iostream>
#include <cmath>
const int NUMBER_OF_PLANTS = 4; 

void input_data(int a[], int last_plant_number);
//Precondition: last_plant_number is the declared size of array array
//Postconidtion: For plant_number = 1 through last_plant_number: 
//a[plant_number - 1] equals the total production for plant number plant_number

void scale(int a[], int size);
//Precondition: a[0] through a[size-1] each has a nonnegative value. 
//Postcondition: a[i] has been changed to the number of 1000s (rounded to
//an integer) there were originally in a[i], for all i such that 0 <= i <= size - 1000s

void graph(const int asterisk_count[], int last_plant_number);
//Precondition: asterisk_count[0] through asterisk_count[last_plant_number -1]
//have nonnegative values
//Postcondition: A bar graph has been displayed saying that plant 
//number N has produced asterisk_count[n-1] 1000s of units, for each N such that
//1<=n <= last_plant_number

void get_total(int& sum);
//reads nonegative integers from the keybord and 
//places their total in the sum. 

int roundproduction(double number);
//Preconditiond: number >0
//Returns the number rounded to the nearest integer. 

void print_asterisks(int n);
//Prints n asterisks to the screen. 

using namespace std;

int main()
{

    using namespace std; 
    int production[NUMBER_OF_PLANTS];
    
    cout << "This program displays a graph showing \n"
         << "production for each plant in the company.\n";
         
         
    input_data(production, NUMBER_OF_PLANTS);           //calls input data with array (no brackets needed)
    scale(production, NUMBER_OF_PLANTS);
    graph(production, NUMBER_OF_PLANTS);

    return 0;
}


//Uses io iostream
void input_data(int a[], int last_plant_number)
{
    using namespace std; 
    for (int plant_number = 1; plant_number <= last_plant_number; plant_number++)
        {
            cout << endl
                 << "Enter production data for plant number " << plant_number << endl;
            get_total(a[plant_number - 1]);
        }
}

//Uses iostream
void get_total(int& sum)
{
    using namespace std; 
    cout << "Enter number of units produced by each department.\n"
         <<"append a negative number to end the list.\n";
         
    sum = 0;
    int next;
    cin >> next; 
    while (next >=0)
    {
        sum = sum + next;
        cin >> next;
    }
    cout << "Total = " << sum << endl;
}

void scale(int a[], int size)
{
    for (int index = 0; index < size; index++)
        a[index] = roundproduction(a[index]/1000.0);
}


//uses cmath:
int roundproduction(double number)
{
    using namespace std; 
    return static_cast<int>(floor(number + 0.5));
}


//uses io stream: 
void graph(const int asterisk_count[], int last_plant_number)
{
    using namespace std; 
    cout << "\nUnits produced in thousands of units:\n";
    for (int plant_number = 1; plant_number <= last_plant_number; plant_number++)
    {
        cout << "Plant #" << plant_number << " ";
        print_asterisks(asterisk_count[plant_number - 1]);
        cout << endl;
    }
}


//Uses iostream:
void print_asterisks(int n)
{
    using namespace std; 
    for (int count = 1; count <= n; count ++)
        cout << "*"; 
}
