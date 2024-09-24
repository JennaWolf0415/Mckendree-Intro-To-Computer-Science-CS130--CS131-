
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float min;
    string min1;
    int min2;
    int min3;
    float max;
    string max1;
    int max2;
    int max3;
    float old;
    string old1;
    int old2;
    int old3;
    float avg;
    float sum;
    float price;
    int count;
    int x;
    int ID;
    int year;
    string name;
    cout << "How many cars do you have? ";
    cin >> x;
    while (x<1)
        {
        cout<< "enter a number above 0! ";
        cin >> x;
        }
    cout << "Enter in this order: ID, Name, Year, Price" << endl;
    cout << "what is your first car? " << endl;
    cin >> ID;
    cin >> name;
    cin >> year;
    cin >> price;
    max = price;
    max1 = name;
    max2 = ID;
    max3 = year;
    min = price;
    min1 = name;
    min2 = ID;
    max3 = year;
    old = price;
    old1 = name;
    old2 = ID;
    old3 = year;
    sum = price;
    count = 1;
    while (count<x)
        {
        cout <<"what is your next car? " << endl;
        cin >> ID;
        cin >> name;
        cin >> year;
        cin >> price;
        if (price>max)
            {
            max = price;
            max1 = name;
            max2 = ID;
            max3 = year;
            }
        if (price<min)
            {
            min = price;
            min1 = name;
            min2 = ID;
            min3 = year;
            }
        if (year<old)
            {
            old = price;
            old1 = name;
            old2 = ID;
            old3 = year;
            }
        sum = sum + price;
        count = count+1;
        }
    avg=sum/count;
    cout << setw (30) <<"Oldest Car = " << setw (10) << old2 << " " << old1 << " $" << old << " " << old3 << endl;
    cout << setw (30) <<"Highest Price = " << setw (10) << max2 << " " << max1 << " $" << max << " " << max3 << endl;
    cout << setw (30) <<"Lowest Price =" << setw (10) << min2 << " " << min1 << " $" << min << " " << min3 << endl;
    cout << setw (30) <<"Average of all prices = " << setw (10) << "$" << avg << endl;

    return 0;
} 
