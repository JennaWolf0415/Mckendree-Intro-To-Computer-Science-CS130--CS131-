
#include <iostream>

using namespace std;

int main()
{
    char char1;
    char char2;
    char char3;
    
    cout<<"Enter three characters"<<endl;
    cin>>char1;
    cin>>char2;
    cin>>char3;
    if(char1<char2&&char1<char3)
        {
        if(char2<char3)
            {
            cout<<char1<<endl;
            cout<<char2<<endl;
            cout<<char3<<endl;
            
            }
        else
            {
            cout<<char1<<endl;
            cout<<char3<<endl;
            cout<<char2<<endl;
            }
        }
    else if(char2<char3&&char2<<char3)
        {
        if(char1<char3)
            {
            cout<<char2<<endl;
            cout<<char1<<endl;
            cout<<char3<<endl;
            }
        else
            {
            cout<<char2<<endl;
            cout<<char3<<endl;
            cout<<char1<<endl;
            }
        }
    else
        {
        if(char1<char2)
            {
            cout<<char3<<endl;
            cout<<char1<<endl;
            cout<<char2<<endl;
            }
        else
            {
            cout<<char3<<endl;
            cout<<char2<<endl;
            cout<<char1<<endl;
            }
        }
    return 0;
}
