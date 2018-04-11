/******************************************************************************

Program to demo call by reference parameters. 

*******************************************************************************/

#include <iostream>

using namespace std;

void get_numbers(int& input1, int& input2);
//Reads two integers from the keyboard

void swap_values(int& variable1, int& variable2);
//Interchange the swap_values

void show_results(int output1, int output2);
//Shows values of var 1 and var 2, in that order

int main()
{

    int first_num = 0, second_num = 0; 
    
    get_numbers(first_num, second_num);
    swap_values(first_num, second_num);
    show_results(first_num, second_num);
    return 0;
}

void get_numbers(int& input1, int& input2)
{
    using namespace std;
    cout << "enter two intergers: ";
    cin  >> input1
         >> input2;
}

void swap_values(int& variable1, int& variable2)
{
    int temp;
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void show_results(int output1, int output2)
{
    using namespace std; 
    cout << "In reverse order " << output1 << " -> " << output2 << endl;
}
