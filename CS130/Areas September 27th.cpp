
#include <iostream>

using namespace std;

int main()
{
    int choice;
    float l, w, s, b, h, a;
    
    do
        {
        cout<<"Please pick one option:" << endl;
        cout<<"1) Calculate Area of a Rectangle"<< endl;
        cout<<"2) Calculate Area of a Square"<< endl;
        cout<<"3) Calculate Area of a Triangle"<< endl;
        cout<<"4) Done"<< endl;
        cin>>choice;
        while(choice<1||choice>4)
            {
            cout<<"Please pick an option between 1-4!"<<endl;
            cin>>choice;
            }
        if (choice==1)
            {
            cout<<"What is the length of your rectangle? ";
            cin>>l;
            cout<<"What is the width of your rectangle? ";
            cin>>w;
            a=l*w;
            cout<<"The area of a rectangle with dimensions of "<<l<<" by "<<w<<" is "<<a<< "."<<endl;
            }
         if (choice==2)
            {
            cout<<"What is the length of the side on your square? ";
            cin>>s;
            a=s*s;
            cout<<"The area of a square with side lengths of "<<s<<" is "<<a<< "."<<endl;
            }
         if (choice==3)
            {
            cout<<"What is the base of your triangle? ";
            cin>>b;
            cout<<"What is the height of your triangle? ";
            cin>>h;
            a=(b*h)/2;
            cout<<"The area of a triangle with dimensions of "<<b<<" by "<<h<<" is "<<a<< "."<<endl;
            }
        }while(choice!=4);

    return 0;
}
