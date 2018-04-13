/******************************************************************************
Author: Eric McGilliard
Email Address: emcgilliard@gmail.com
Chapter 6, Programming Project #1 
Description: This program will generate custom mail. It will accept input from
the user (name), and create an output file. 
Last Changed: 04/11/2018
*******************************************************************************/

#include <fstream>
#include <iostream>
#include <cstdlib>


using namespace std;

//wchar_t getName(); 

int main()
{

	using namespace std;
	
	//Ask the user for the name
	char name[30];
	cout << "Please enter the name"; 
	cin >> name; 
	//output for debugging cout << name; 
	
	
	//Create vars for input & output stream, and the user name
	ifstream in_stream;       //input file stream variable declaration  (class ifstream)       
	ofstream out_stream;      //output file stream declaration          ( class ofstream)
    
    
    //Create var for name
    //wchar_t name = getName(); 

	in_stream.open("letter_template.dat");           //infile.dat is assigned to in_stream
	if (in_stream.fail())                            //check to see if the input file opened
    {
            cout << "Input file opening failed!\n";
            exit(1);
    }
	
	out_stream.open("letter_output.dat");            //outfile.dat is assigned to out_stream
	if (out_stream.fail())                           //check to see if the output file failed to open
    {
            cout << "Output file opening failed!\n";
            exit(1);
    }



    //close the instream and outstream files
	in_stream.close();
	out_stream.close();
	
	cout << "End of program.";

	return 0;
}

/*        
//Why isn't cin working in this function? 
wchar_t getName()
{
        using namespace std;
        char name; 
        cout << "Please enter a name";
        cin >> name; 
        cout << name;
        
        return name;
        
}
*/
