/******************************************************************************

Author: Eric McGilliard
Email Address: emcgilliard@gmail.com
Chapter 2, Programming Project #1 

Description: This program will calcualte the amount of artificial sweetner 
required to cause death to a human

Last Changed: 03/06/2018

*******************************************************************************/



#include <iostream>

using namespace std;

int main()
{
	const double SWEETNER_RATIO = .001;                 //Ratio of sweetner to diet soda
	const double SODA_SIZE_GRAMS = 350;                 //Weight (grams) of a can of soda
	const double LETHAL_DOSE_RATIO = 0.142857;          //This is the ratio of sweetner -> mass for a lethal does (equal to 1/7)
	const double POUNDS_TO_GRAM_CONVERSION = 453.59237; //Constant conversion for pounds to grams


	double lethalDose;                              //For storing lethal dose amount
	double sweetnerPerCan;                          //The amount (grams) of artificial sweetner in each can
	double numberOfCans;                            //Number of cans that must be consumed
	double pounds;                                  //User weight
	double mass;                                    //Mass of the user (in grams)

	char another;                                   //Looping value


													//Find the amount of sweetner (in grams) in each can of diet soda 

	sweetnerPerCan = SODA_SIZE_GRAMS * SWEETNER_RATIO;

	//Display the result (for debugging only)

		// cout << "Sweetner per can (in grams) " << sweetnerPerCan << endl;

	//Welcome the user    

		cout << "Did you know that artificial sweetner has caused death in lab mice?\n"
			 << "Use this calculator to determine how much diet soda it would take to kill you!\n"
			 << "________________________________________________________________________________\n";


	//Post-test do-while Loop for computing the lethal dosage of artificial sweetner

	do
	{
		cout << "Please input your desired weight in pounds: ";
		cin >> pounds;


		cout << "\nThank you. You entered " << pounds << " pounds.\n\n";

		//Convert pounds to grams

		mass = pounds * POUNDS_TO_GRAM_CONVERSION;


		//Use the users weight to find the letal dosage (in grams of sweetner)

		lethalDose = mass * LETHAL_DOSE_RATIO;


		//Display the leathal dose amount in grams

		cout << "You'd need to consume " << lethalDose
			<< " grams of artificial sweetner to die.\n\n";


		//Find the number of cans needed to produce a leathal dosage of sweetner

		numberOfCans = lethalDose / sweetnerPerCan;

		//Display the number of cans that need to be consumed    

		cout << "That comes out to "
			<< numberOfCans
			<< " cans of diet soda!\n\n";



		//Ask if the user wants to perform another calculation


		cout << "Do you want to do another calculation? (Y for Yes)\n\n";
		cin >> another;



	} while (another == 'Y' || another == 'y');




	cout << "\nThank you for using the diet soda calculator, goodbye!";

	return 0;
}
