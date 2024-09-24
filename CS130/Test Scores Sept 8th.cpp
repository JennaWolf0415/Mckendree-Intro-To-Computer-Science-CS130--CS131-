
#include <iostream>

using namespace std;

int main()
{
float a;
float b;
float c;
float d;
float e;
float ave;
    
cout<< "Enter your five test scores!" << endl;
cin>> a;
cin>> b;
cin>> c;
cin>> d;
cin>> e;
if ((a<=0||a>=100)||(b<=0||b>=100)||(c<=0||c>=100)||(d<=0||d>=100)||(e<=0||e>=100))
    cout<< "Invalid Test Score was entered";
else
    {
    if (a==b&&b==c&&c==d&&d==e)
    cout<< "You are consistant!"<<endl;
    ave=(a+b+c+d+e)/5;
    if(ave>=93)
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a A!"<<endl;
        }
    else if (ave>=90)
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a A-"<<endl;
        }
    else if (ave>=87)
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a B+"<<endl;
        }
    else if (ave>=83)
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a B"<<endl;
        }
    else if (ave>=80)
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a B-"<<endl;
        }
    else if (ave>=77)
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a C+"<<endl;
        }
    else if (ave>=73)
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a C"<<endl;
        }
    else if (ave>=70)
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a C-"<<endl;
        }
    else if (ave>=60)
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a D"<<endl;
        }
    else
        {
        cout<<"Average score is: "<<ave<<endl;
        cout<<"You got a F"<<endl;
        }
    }
    
    return 0;
}
