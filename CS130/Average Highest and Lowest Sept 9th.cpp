#include <iostream>

using namespace std;

int main()
{
 float a;
float b;
float c;
float d;
float e;
string eq;
float awn;

cout <<"which equation do you want to use? average, highest, or lowest? (lowercase only!)" << endl;
cin >> eq;
cout << "What are your integers? (type 5)" << endl;
cin >> a;
cin >> b;
cin >> c;
cin >> d;
cin >> e;
if (eq=="average")
    {
    awn=(a+b+c+d+e)/5;
    cout << awn << " is your average";
    }
else
    {
    if (eq=="highest")
    {
        if (a>b)
        {
            if (a>c)
            {
                if (a>d)
                {
                    if (a>e)
                    cout << a << " is the highest number";
                    else
                    cout << e << " is the highest number";
                }
                else
                {
                    if(d>e)
                    cout << d << " is the highest number";
                    else
                    cout << e << "is the highest number";
                }
            }
            else
            {
                if(c>d)
                {
                    if(c>e)
                    cout << c << " is the highest number";
                    else
                    cout << e << " is the highest number";
                }
                else
                {
                    if(d>e)
                    cout << d << " is the highest number";
                    else
                    cout << e << "is the highest number";
                }
            }
        }
        else
        {
            if(b>c)
            {
                if(b>d)
                {
                    if (b>e)
                    cout << b << " is the highest number";
                    else
                    cout << e << " is the highest number";
                }
                else
                {
                    if (d>e)
                    cout << d << " is the highest number";
                    else
                    cout << e << " is the highest number";
                }
            }
            else
            {
                if (c>d)
                {
                    if(c>e)
                    cout << c << " is the highest number";
                    else
                    cout << e << " is the highest number";
                }
                else
                {
                    if(d>e)
                    cout << d << " is the highest number";
                    else
                    cout << e << " is the highest number";
                }
            }
        }
    }
    else
    {
       if (a<b)
        {
            if (a<c)
            {
                if (a<d)
                {
                    if (a<e)
                    cout << a << " is the lowest number";
                    else
                    cout << e << " is the lowest number";
                }
                else
                {
                    if(d<e)
                    cout << d << " is the lowest number";
                    else
                    cout << e << " is the lowest number";
                }
            }
            else
            {
                if(c<d)
                {
                    if(c<e)
                    cout << c << " is the lowest number";
                    else
                    cout << e << " is the lowest number";
                }
                else
                {
                    if(d<e)
                    cout << d << " is the lowest number";
                    else
                    cout << e << "is the lowest number";
                }
            }
        }
        else
        {
            if(b<c)
            {
                if(b<d)
                {
                    if (b<e)
                    cout << b << " is the lowest number";
                    else
                    cout << e << " is the lowest number";
                }
                else
                {
                    if (d<e)
                    cout << d << " is the lowest number";
                    else
                    cout << e << " is the lowest number";
                }
            }
            else
            {
                if (c<d)
                {
                    if(c>e)
                    cout << c << " is the lowest number";
                    else
                    cout << e << " is the lowest number";
                }
                else
                {
                    if(d<e)
                    cout << d << " is the lowest number";
                    else
                    cout << e << " is the lowest number";
                }
            }
        }
    }
    }
    
    return 0;
}
