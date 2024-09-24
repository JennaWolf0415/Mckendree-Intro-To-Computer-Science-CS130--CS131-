/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    char ans;
int x;
int count;
int num;
do
    {
    cout << "What integer above one would you like to test? ";
    cin >> num;
    while (num<=1)
        {
        cout << "That integer is not above one!" << endl;
        cout << "What integer would you like to try? " << endl;
        cin >> num;
        }
    count = 1;
    x = 1;
    while (count<=num)
        {
        x=count*x;
        count=count+1;
        }
    cout << "your answer is " << x << endl;
    cout << "Would you like to go again? (y/n)";
    cin >> ans;
    }
while (ans == 'y'||ans == 'Y');
    return 0;
}
