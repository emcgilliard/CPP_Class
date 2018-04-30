/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

typedef int* IntPtr;

int main()
{

    IntPtr p; 
    int a[10];
    int index; 
    
    for (index = 0; index < 10; index++)
        a[index] = index;
        
    p = a;
    
    for (index = 0; index < 10; index++)
          cout << p[index] << " ";
    cout << endl; 
    
    for (index = 0; index < 10; index++)
        p[index] = p[index] + 1;
        
    for (index = 0; index < 10; index++)
        cout << a[index] << " ";
        cout << endl;
    return 0;
}
