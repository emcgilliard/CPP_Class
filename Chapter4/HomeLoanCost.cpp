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
double getPrice();                                  //asks the user for the cost of the home
double getDownpayment();                            //asks the user for the down payment amount
double getBalance(double price, double downPayment);//get the initial laon balance


int main()
{
    
    double initialLoan, price, downPayment;
    
    //Welcome message
    cout << "Welome to the mortgage cost calculator!\n"
         << "THis program will calculate the annual after-tax cost of a new home.\n";
    
    //Get the input from the user
    price = getPrice();
    downPayment=  getDownpayment();
    
    //Get the initial loan balance
    initialLoan = getBalance(price, downPayment);
    
    //
    
    cout<<"Hello World";

    return 0;
}



/******************************************************************************
getCost asks the user to input the cost, returns price
*****************************************************************************/
double getPrice()
{
    double price; 
    cout << "Please enter the cost of the home: $";
    cin >> price;
    return price;
}

/******************************************************************************
getDownpayment asks the user for the downpayment, returns downpayment
*****************************************************************************/
double getDownpayment()
{
    double downpayment;
    cout << "Please enter the down payment: $";
    cin >> downpayment;
    return downpayment;
}

/******************************************************************************
getBalance computes the initial loan balance (Cost - Downpayment)
*****************************************************************************/
double getBalance(double price, double downPayment)
{
    double balance;
    balance = price - downPayment;
    return balance;
}




