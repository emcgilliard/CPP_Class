/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	int arrayTest[5];	//Declare an arry of int, with 5 locations
	arrayTest[0] = 2;   //Set the value of an array
	cout << arrayTest[0] << endl;
	
	double payRate, hoursWorked[5];	//Declare two vars, payRate and an array of hoursWorked
	
	int score[5];           //array score, 5 elements
	int n = 2;              //used to assign value
	score[n+1] = 99;        //use an expression in array
	cout << score[n+1] << endl;
	

	return 0;
}
