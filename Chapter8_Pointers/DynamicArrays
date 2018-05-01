
/******************************************************************************
Author: Eric McGilliard
Email Address: emcgilliard@gmail.com
Chapter 9, Programming Project #1 
Description: This program will add two integer arrays together using the pencil
and paper method
Last Changed: 04/30/2018
*******************************************************************************/

#include <iostream>

typedef int* IntArrayPtr;

void fill_array(int a[], int b[], int size);
//Precondition: size is the size of the array a.
//Postcondition: a[0] through a[size - 1] have been
//filled with values read from the keyboard

void add_arrays(int a[], int b[], int c[], int size);
//Precondition: size is the size of the array a.
//Postcondition: a[0] through a[size - 1] have been
//filled with values read from the keyboard

void show_sum(int c[], int size);
//Shows the sum of the arrays a and b


int main()
{
    using namespace std;
    cout << "This program will add two arrays of integers using the paper & pencil method.\n";
    
    int array_size; 
    cout << "How large is the largest number that will be added? ";
    cin >> array_size;
    
    IntArrayPtr a; 
    a = new int[array_size];            //Integer array 1
    
    IntArrayPtr b; 
    b = new int[array_size];            //Integer array 2
    
    IntArrayPtr c; 
    c = new int[array_size];            //Holds the sum of int array 1 & 2
    
    fill_array(a, b, array_size);       //Get the number from the user
    add_arrays(a, b, c, array_size);    //Add the numbers together
    show_sum(c, array_size);            //show the result

    return 0;
}


////////////////////////////////////////////////////////////////////////////////
//Asks the user to enter two integer numbers
////////////////////////////////////////////////////////////////////////////////

void fill_array(int a[], int b[], int size)
{
    using namespace std; 
    cout << "Enter the first integer.\n";
    for (int index = 0; index < size; index++)
        cin >> a[index];
        
    cout << "Enter the second integer.\n";
    for (int index = 0; index < size; index++)
        cin >> b[index];
}

////////////////////////////////////////////////////////////////////////////////
//Addition algorithm, adds the sum of array a,b to array c
////////////////////////////////////////////////////////////////////////////////

void add_arrays(int a[], int b[], int c[], int size)
{
    using namespace std; 
    
    int sum;
    int remain = 0; 
 
    for (int index = 0; index < size; index++)
       { 
            sum = a[index] + b[index] + remain;
            
            if (sum > 9)                     //check to see if a remainder is needed. 
            {
                remain = sum / 10;           //divde the sum by 10 to calculate the remainder
                sum = sum - (remain * 10);   //subtract the remainder from the sum, to be carried over
            }
            
            c[index] = sum;                 //set c[index] equal to the sum, minus the remainder
           
       }
        
}

////////////////////////////////////////////////////////////////////////////////
//Display the output
////////////////////////////////////////////////////////////////////////////////

void show_sum(int c[], int size)
{
    using namespace std; 
    
    for (int index = 0; index < size; index++)
        cout << c[index];
}

////////////////////////////////////////////////////////////////////////////////
//Overflow warning
////////////////////////////////////////////////////////////////////////////////






