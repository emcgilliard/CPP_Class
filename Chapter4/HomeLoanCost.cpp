/******************************************************************************
Author: Eric McGilliard
Email Address: emcgilliard@gmail.com
Chapter 4, Programming Project #1 
Description: This program will calculate annual after-tax savings cost of a new house
             for the first year of ownership. 
Last Changed: 04/10/2018
*******************************************************************************/


#include <iostream>

using namespace std;

//Set constant for tax rate
const double TAX_RATE = 0.35;

//Function declarations
double getPrice();                                   //asks the user for the cost of the home
double getDownpayment();                             //asks the user for the down payment amount
double getBalance(double price, double downPayment); //get the initial laon balance
double setCost(double initialLoan);                  //Find the annual cost of the loan, after tax deduction


int main()
{
    //declare vars for home price, loan amount, down payment, and annual cost
    double initialLoan, price, downPayment, cost;
    //declare a looping var
    char loop;
    
    //Welcome message
    cout << "Welome to the mortgage cost calculator!\n"
         << "THis program will calculate the annual after-tax cost of a new home.\n";
 
do 
{
    //Get the input from the user
    price = getPrice();
    downPayment=  getDownpayment();
    
    //Get the initial loan balance
    initialLoan = getBalance(price, downPayment);
    
    //determine the cost of the loan
    cost = setCost(initialLoan);
    
    //format the output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The annual cost of the mortage, after tax savings, is: $";
    cout << cost << endl;
    
    //Ask if the user wants to repeat the calculation
    cout << "Do you want to do another calculation? (Y for Yes)";
    cin >> loop;
} 


while (loop == 'Y' || loop == 'y');

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

/******************************************************************************
setCost determines the cost of the loan annually by adding principal payment, 
interest payment, and subtracting the tax deductable interest payments
*****************************************************************************/
double setCost(double initialLoan)
{
    double principal_pmt, interest_pmt, interest_savings, cost;   //local variable to calculate the cost
    principal_pmt = initialLoan * 0.03;                           //Set principal equal to 3% of loan
    interest_pmt = initialLoan * 0.06;                            //Set interest equal to 6% of laon
    interest_savings = interest_pmt * TAX_RATE;                   //calculate the tax-deductable interest
    cost = ((principal_pmt + interest_pmt) - interest_savings);   //Calculate the net cost of ownership
    return cost; 
}



