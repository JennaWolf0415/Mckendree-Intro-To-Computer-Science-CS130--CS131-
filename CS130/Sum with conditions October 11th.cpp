
#include <iostream>

using namespace std;

int main()
{
    float x;
    float sum;
    int count;
    
    cout<<"Enter your first number"<<endl;
    cin>>x;
    count=0;
    sum=0;
    do
        {
        sum=sum+x;
        count=count+1;
        cout<<"Input your next number"<<endl;
        cin>>x;
        }
    while(count<25&&sum<100&&x>0);
    cout<<"Your total is "<<sum;
    return 0;
}
