//Assignment:Hospital Charges
//Name: Jenna Wolf
//Date:October 25th 2022
//Purpose: Purpose of this program is to caluculate the cost of a person staying at a hospital. Choose from inpatient or
//outpatient or quit and based on choice, determin the cost of their stay.
#include <iostream>
using namespace std;
void inp(float &);
void outp(float &);
void menu(int &);

int main()
{
   int awn;
   float total;
    do
    {
        menu(awn);
        if(awn==1)
        {
            inp(total);
            cout<<"The total for this patient is "<<total<<endl<<endl;
        }
        else if(awn==2)
        {
            outp(total);
            cout<<"The total for this patient is "<<total<<endl<<endl;
        }
    }while(awn!=3);
    cout<<"Bye!";
    return 0;
}

void menu(int &awn)
{
    //Purpose: Choose an option
    //Input: awn
    //Output: awn
     cout<<"Choose one option:"<<endl;
        cout<<"1.Inpatient"<<endl;
        cout<<"2.Outpatient"<<endl;
        cout<<"3.Quit"<<endl;
        cin>>awn;
        while(awn!=1&&awn!=2&&awn!=3)
            {
            cout<<"Pick a proper option!"<<endl;
            cin>>awn;
            }
}
void inp(float &total)
//Purpose:Calculate amount for inpatient stay
//Input: total
//Output: total
{
    int days;
    float dr, med, ser, dayr;
    cout<<"Enter values"<<endl;
    cout<<"days: ";
    cin>>days;
    cout<<"Daily Rate: ";
    cin>>dr;
    cout<<"Medication Cost: ";
    cin>>med;
    cout<<"Serive Cost: ";
    cin>>ser;
    dayr=days*dr;
    total=dayr+med+ser;
}

void outp (float &total)
//Purpose:Caluculate the amount for an outpatient
//Input: total
//Output: total
{
    float med, ser;
    cout<<"Enter values"<<endl;
    cout<<"Medication Cost: ";
    cin>>med;
    cout<<"Serive Cost: ";
    cin>>ser;
    total=med+ser;
}