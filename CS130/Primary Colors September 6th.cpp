
#include <iostream>

using namespace std;

int main()
{
string color1;
string color2;


cout << "enter two primary color (lowercased and spelt correctly! In the order red, than blue, than yellow!)" << endl;
cin >> color1;
cin >> color2;
if (color1=="red" && color2=="yellow")
    cout << "The color is orange" << endl;
else
    if (color1=="red" && color2=="blue")
    cout << "The color is purple" << endl;
    else
        if (color1=="blue" && color2=="yellow")
        cout << "The color is green" << endl;
        else
        cout << "error, proper primary colors not entered";
return 0;
}
