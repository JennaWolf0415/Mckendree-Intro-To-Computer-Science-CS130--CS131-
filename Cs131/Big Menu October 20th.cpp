#include <iostream>
using namespace std;
void volume();
void alphabetical();
void sum();
void csum();

int main()
{
    int awn;
    do
    {
        cout<<"Choose one option:"<<endl;
        cout<<"1.Volume"<<endl;
        cout<<"2.Alphabetical"<<endl;
        cout<<"3.Sum"<<endl;
        cout<<"4.Count Sum"<<endl;
        cout<<"5.Quit"<<endl;
        cin>>awn;
        while(awn!=1&&awn!=2&&awn!=3&&awn!=4&&awn!=5)
            {
            cout<<"Pick a proper option!"<<endl;
            cin>>awn;
            }
        if(awn==1)
            volume();
        else if(awn==2)
            alphabetical();
        else if(awn==3)
            sum();
        else if(awn==4)
            csum();
    }while(awn!=5);
    
    return 0;
}
    
void volume()
{
    float l;
    float w;
    float h;
    float x;
    
    cout<<"Enter you length, then your width, then your height!"<<endl;
    cin>>l;
    cin>>w;
    cin>>h;
    x=l*w*h;
    cout<<"Your volume is "<<x<<endl; 
}
void alphabetical()
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
}
void sum()
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
    cout<<"Your total is "<<sum<<endl;
}
void csum()
{
     float x;
    float awn;
    int a;
    string ag;

        cout<<"Enter a number ";
        cin>>x;
        while(x<0)
            {
            cout<<"Enter a number above 0! ";
            cin>>x;
            }
        awn=x;
        for(a=1;x>a;a=a+1)
            awn=awn+a;
        cout<<"Total is "<<awn<<endl;

}
