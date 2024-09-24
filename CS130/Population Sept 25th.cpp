
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 float p;
 float pinc;
 float days;
 float count;
 string ans;
do
{
    cout << "What is the population of the organism? ";
    do
    {
    cin >> p;
    if (p<=2)
      {
        cout << "Population needs to be more then 2!"<<endl;
        cout << "What is the population of the organism? ";
        cin >> p;
      }
    } while (p<=2);
    cout << "What is the percentage the population increases each day? ";
    cin >> pinc;
    while (pinc<=0)
        {
        cout << "Percentage cannot be negative!"<<endl;
        cout << "What is the percentage the population increases each day? ";
        cin >> pinc;
        }
    cout << "How many days? ";
    cin >> days;
    while (days<=1)
        {
        cout << "You need more than 1 day!"<<endl;
        cout << "How many days? ";
        cin >> days;
        }
    count = 1;
    while (count<=days)
    {
    cout << setw (10) << count << " days" << setw (10) << p << " organisms" << endl;
    p = p+(p*pinc);
    count = count+1;
    }
    cout << "Would you like to go again? (y/n)";
    cin >> ans;
} while (ans=="y");
    return 0;
}
