
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float min;
    float max;
    float sum;
    float mean;
    float value;
    int n;
    int count;
    cout << "How many numbers do you have? ";
    cin >> n;
    while (n<1)
        {
        cout<< "enter a number above 0! ";
        cin >> n;
        }
    cout << "what is your first number? ";
    cin >> value;
    max = value;
    min = value;
    sum = value;
    count = 1;
    while (count<n)
        {
        cout <<"what is your next number? ";
        cin >> value;
        if (value>max)
            max = value;
        if (value<min)
            min = value;
        count = count+1;
        sum = sum+value;
        }
    mean=sum/count;
    cout << setw (20) <<"mean = " << setw (10) << mean << endl;
    cout << setw (20) <<"max = " << setw (10) << max << endl;
    cout << setw (20) <<"min = " << setw (10) << min << endl;
    cout << setw (20) <<"amount of values = " << setw (10) << n << endl;
    

    return 0;
}
