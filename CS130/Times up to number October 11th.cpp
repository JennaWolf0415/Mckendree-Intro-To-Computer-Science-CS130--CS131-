
#include <iostream>

using namespace std;

int main()
{
    float x;
    float awn;
    int a;
    string ag;
    do
        {
        cout<<"Enter a number ";
        cin>>x;
        while(x<0)
            {
            cout<<"Enter a number above 0! ";
            cin>>x;
            }
        awn=x;
        for(a=1;x>a;a=a+1)
            awn=awn*a;
        cout<<"Total is "<<awn<<endl;
        cout<<"Would you like to go again? (y/n) ";
        cin>>ag;
        }
    while(ag=="y");

    return 0;
}
