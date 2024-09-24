
#include <iostream>

using namespace std;

int main()
{
    int x;
    char c;
    cout<<"What is your statement?"<<endl;
    while (c!='#')
        {
        cin>>c;
        if(c>='A'&&c<='Z')
            {
            x=c+5;
            cout<<x<<" ";
            }
        else if (c>='a'&&c<='z')
            {
            x=c+5;
            cout<<x<<" ";
            }
        else if(c=='.')
            cout<<"A ";
        else if(c==',')
            cout<<"B ";
        else if(c=='?')
            cout<<"C ";
        else
            cout<<"D ";
        }

    return 0;
}
