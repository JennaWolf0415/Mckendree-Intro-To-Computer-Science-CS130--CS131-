#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifp;
    string filename;
    float x;
    float y;
    float a;
    string any;
    
    ifp.open("Shapes.txt");
    if (!ifp)
        {
        cout<<"Error"<<endl;
        }
        ifp>>any;
        ifp>>any;
        ifp>>any;
        while(ifp>>any>>x>>y)
            {
            if(any=="Triangle")
                {
                a=x*y/2;
                cout<<"A triangle with a base of "<<x<<" and a height of "<<y<<" equals "<<a<<endl;
                }
            else if(any=="Rectangle")
                {
                a=x*y;
                cout<<"A rectangle with a side of "<<x<<" and a side of "<<y<<" equals "<<a<<endl;
                }
            else
                {
                a=x*y;
                cout<<"A square with sides of "<<x<<" equals "<<a<<endl;   
                }
            }
		ifp.close();

    return 0;
}
