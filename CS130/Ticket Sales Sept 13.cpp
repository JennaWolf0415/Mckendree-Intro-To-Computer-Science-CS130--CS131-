
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a;
    float b;
    float c;
    float x;
    float y;
    float z;
    float sum;
    
cout<<"How many Class A seat tickets were sold?"<<endl;
cin>>a;
cout<<"How many Class B seat tickets were sold?"<<endl;
cin>>b;
cout<<"How many Class C seat tickets were sold?"<<endl;
cin>>c;
x=a*15;
y=b*12;
z=c*9;
sum=x+y+z;
cout<<setw(12)<<"A"<<setw(12)<<fixed<<setprecision(2)<<x<<endl;
cout<<setw(12)<<"B"<<setw(12)<<fixed<<setprecision(2)<<y<<endl;
cout<<setw(12)<<"C"<<setw(12)<<fixed<<setprecision(2)<<z<<endl;
cout<<setw(12)<<"Total"<<setw(12)<<fixed<<setprecision(2)<<sum<<endl;

    return 0;
}
