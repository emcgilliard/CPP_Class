/******************************************************************************

Reads in 5 scores and shows how much each score differs 
from the highest score. 

*******************************************************************************/

#include <iostream>



int main()
{

    using namespace std;
    int i, score[5], max;                   //i for index, score = array, max = max score
    
    cout << "Enter 5 scores:\n";
    cin  >> score[0];                       //get the first score
    max = score[0];                         //set max = first score (subscribt 0)
    for (i = 1; i < 5; i++)                 //for i = 1 (second position), to i < 5, increment i after test
    {
        cin >> score[i];                   //input score for element i
        if (score[i] > max)                //check to see if it is greater than the max
            max = score[i]; 
        //max is the larges of the values score[0]....score[i].
    }
    
    cout << "The highest score is " << max << endl          //show the max score
         << "the scores and their\n"
         << "differences from the highest are:\n";
    for (i = 0; i < 5; i++)                                //step through the array for elements 0 to 4
        cout << score[i] << " off by "                     //show the original score
             << (max - score[i]) << endl;                  //show the difference from the max score

    return 0;
}
