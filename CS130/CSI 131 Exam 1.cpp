
#include <iostream>

using namespace std;

int main()
{
int x;
int a;
int b;

cout << "What is your number?" << endl;
cin >> x;
a = x%2;
b = x%5;
if (a==0||b==0)
    cout<<"It is divisable by 2 or 5!!"<< endl;
if (x>149 && x<9042)
    cout<<"It is in the range!!"<< endl;
if ((a==0||b==0)&&(x>149&&x<9042))
    cout<<"We have a candidate for our values!!"<<endl;

    return 0;
}
