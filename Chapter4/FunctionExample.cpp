/******************************************************************************

This program demonstrates how to create a function

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

//double total_cost(int number_par, double price_par);        //function declaration. Formal parameter names are not required

double total_cost(int, double);  //this function uses only the data types
//computes the total cose, including 5% sales tax, 
//on number_par items at a cost of price_par each

int main()
{

    double price, bill; 
    int number; 
    
    cout << "Enter the number of items purchased: "; 
    cin  >> number; 
    cout << "Enter the price per item $";
    cin  >> price; 
    
    bill = total_cost(number, price);       //function call
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at "
         << "$" << price << " each.\n"
         << "Final bill, including tax, is $" << bill
         << endl;
         
    return 0;
}



double total_cost(int number_par, double price_par)         //function heading
{
        const double TAX_RATE = 0.05; //5% sales TAX_RATE
        double subtotal; 
        
        subtotal = price_par * number_par;
        return (subtotal + subtotal * TAX_RATE);
        
}













