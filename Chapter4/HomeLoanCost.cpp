/******************************************************************************
Author: Eric McGilliard
Email Address: emcgilliard@gmail.com
Chapter 4, Programming Project #1 
Description: This program will calculate annual after-tax cost of a new house
             for the first year of ownership. 
             various time of the day and on various days of the week. 
Last Changed: 03/07/2018
*******************************************************************************/


#include <iostream>

using namespace std;

//Set constant for tax rate
const double TAX_RATE = 0.35;

//Function declarations
double getCost();       //asks the user for the cost of the home
double getDownpayment(); //asks the user for the down payment amount
double getBalance(double cost, double downPayment);


int main()
{
    
    double initialLoan;
    
    //Welcome message
    cout << "Welome to the mortgage cost calculator!\n"
         << "THis program will calculate the annual after-tax cost of a new home.\n";
    
    //Get the input from the user
    double cost = getCost();
    double downPayment=  getDownpayment();
    
    //Get the initial loan balance
    initialLoan = getBalance(cost, downPayment);
    

    
    
    
    
    cout<<"Hello World";

    return 0;
}



double getCost()
{
    double cost; 
    cout << "Please enter the cost of the home: $";
    cin >> cost;
    return cost;
}


double getDownpayment()
{
    double downpayment;
    cout << "Please enter the down payment: $";
    cin >> downpayment;
    return downpayment;
}

double getBalance(double cost, double downPayment)
{
    double balance;
    balance = cost - downPayment;
    return balance;
}
