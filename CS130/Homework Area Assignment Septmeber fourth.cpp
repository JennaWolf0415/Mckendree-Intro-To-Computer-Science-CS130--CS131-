/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   float area;
   float length;
   float width;
   float side;
   float base;
   float height;
   
   cout << "Enter length and width of rectangle" << endl;
   cin >> length;
   cin >> width;
   area = length*width;
   cout << "The area of your rectangle with length of " << length << " and width of " << width << " is " << area << endl;
   cout << "Enter side of square" << endl;
   cin >> side;
   area = side*side;
   cout << "The area of your square with side of " << side << " is " << area << endl;
   cout << "Enter the base and height of traingle" << endl;
   cin >> base;
   cin >> height;
   area = base*height/2;
   cout << "The area of your triangle with base of " << base << " and height of " << height << " is " << area << endl;
   
    return 0;
}
