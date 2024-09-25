//Assignment: Employee Information
//Name: Jenna Wolf
//Date: November 29th, 2022
//Purpose: Enter and print employee information (user can choose what they want to enter)
#include <iostream>

using namespace std;
struct person{
                string first, last;
                int age;
                int ss[9];
             };
struct employee{
                 int empnum;
                 float wage;
                 person pData;
                 string job;
               };
void info(employee[]);
void print(employee[]);
int main()
{
    person p[10];
    employee e[10];
    int awn,f,j;
    for(f=0;f<10;f++)
    {
        e[f].empnum=0;
        e[f].wage=0;
        e[f].pData.first=' ';
        e[f].pData.last=' ';
        e[f].pData.age=0;
        for(j=0;j<9;j++)
            e[f].pData.ss[j]=0;
        e[f].job=' ';
    }
    do{
        cout<<"pick an option:"<<endl;
        cout<<"1.enter info"<<endl;
        cout<<"2.print info"<<endl;
        cout<<"3.quit"<<endl;
        cin>>awn;
        while(awn>3&&awn<0)
        {
            cout<<"please enter a proper answer!"<<endl;
            cin>>awn;
        }
        if(awn==1)
            info(e);
        else if(awn==2)
            print(e);
    }while(awn!=3);

    return 0;
}
void info(employee e[])
//Purpose: read in employee info
//input: e[]
//output: e[]
{
    int i,a;
    char awn;
    cout<<"enter the # for the employee you wish to enter data for: ";
    cin>>i;
    cout<<"do you want to enter employee #?(y or n): "<<endl;
    cin>>awn;
    if(awn=='y')
    {
        cout<<"enter employee #: ";
        cin>>e[i].empnum;
    }
    cout<<"do you want to enter employee wage?(y or n): "<<endl;
    cin>>awn;
    if(awn=='y')
    {
        cout<<"enter employee wage: ";
        cin>>e[i].wage;
    }
    cout<<"do you want to enter employee name?(y or n): "<<endl;
    cin>>awn;
    if(awn=='y')
    {
        cin.ignore();
        cout<<"enter first name: ";
        getline(cin,e[i].pData.first);
        cout<<"enter last name: ";
        getline(cin,e[i].pData.last);
    }
    cout<<"do you want to enter employee age?(y or n): "<<endl;
    cin>>awn;
    if(awn=='y')
    {
        cout<<"enter age: ";
        cin>>e[i].pData.age;
    }
    cout<<"do you want to enter employee ss?(y or n): "<<endl;
    cin>>awn;
    if(awn=='y')
    {
        cout<<"enter social security #(1 number at a time): ";
        for(a=0;a<9;a++)
            cin>>e[i].pData.ss[a];
    }
    cout<<"do you want to enter employee job title?(y or n): "<<endl;
    cin>>awn;
    if(awn=='y')
    {
        cin.ignore();
        cout<<"enter job title: ";
        getline(cin,e[i].job);
    }
}
void print(employee e[])
//purpose:print employee info
//input:e[]
//output:e[]
{
    int i,a;
    cout<<"enter the # for the employee you wish to enter data for: ";
    cin>>i;
    cout<<"employee #: "<<e[i].empnum<<endl;
    cout<<"employee wage: "<<e[i].wage<<endl;
    cout<<"employee name: "<<e[i].pData.first<<" "<<e[i].pData.last<<endl;
    cout<<"employee age: "<<e[i].pData.age<<endl;
    cout<<"social security #: ";
    for(a=0;a<9;a++)
        cout<<e[i].pData.ss[a];
    cout<<endl;
    cout<<"job title: "<<e[i].job<<endl;
}