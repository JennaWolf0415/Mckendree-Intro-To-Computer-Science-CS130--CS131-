/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int Time;
    int h;
    int m;
    int s;
    
    cout << "enter number of seconds" << endl;
    cin >> Time;
    if (Time>3599)
        { 
        h = Time/3600;
        Time = Time%3600;
        m = Time/60;
        s = Time%60;
        cout << "Time remaining is " << h << " hours " << m << " minutes and " << s << " seconds." << endl;
        }
    else
        if (Time>59)
        { 
        m = Time/60;
        s = Time%60;
        cout << "Time remaing is " << m << " minutes and " << s << " seconds." << endl;
        }
        else
        cout << "Time remaing is " << Time << "seconds." << endl;
    return 0;
}
