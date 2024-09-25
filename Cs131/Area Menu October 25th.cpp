/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void Rec();
void Sq();
void Tr();

int main()
{
  int awn;
    do
    {
        cout<<"Choose one option:"<<endl;
        cout<<"1.Area of a Rectangle"<<endl;
        cout<<"2.Area of a Square"<<endl;
        cout<<"3.Area of a Trianlge"<<endl;
        cout<<"4.Quit"<<endl;
        cin>>awn;
        while(awn!=1&&awn!=2&&awn!=3&&awn!=4)
            {
            cout<<"Pick a proper option!"<<endl;
            cin>>awn;
            }
        if(awn==1)
            Rec();
        else if(awn==2)
            Sq();
        else if(awn==3)
            Tr();
    }while(awn!=4);
    cout<<"Bye!";
    return 0;
}

void Rec()
{
    int x, y, a;
    cout<<"Enter your side lengths: "<<endl;
    cin>>x;
    cin>>y;
    a=x*y;
    cout<<"Area of your rectangle with sides of "<<x<<" and "<<y<<" is "<<a<<endl;
}

void Sq()
{
    int x, a;
    cout<<"Enter your side length: "<<endl;
    cin>>x;
    a=x*x;
    cout<<"Area of your square with sides of "<<x<<" is "<<a<<endl;
}

void Tr()
{
    int x, y, a;
    cout<<"Enter your base and height: "<<endl;
    cin>>x;
    cin>>y;
    a=x*y/2;
    cout<<"Area of your Triangle with a base of "<<x<<" and height of "<<y<<" is "<<a<<endl;
}