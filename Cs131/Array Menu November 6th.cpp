//Assignment: Big Array Menu
//Name: Jenna Wolf
//Date: November 3rd, 2022
//Purpose:Use Arrays to keep lots of peoples information (up to 50). Keep peoples information, caluculate Ia's, Id's, and r's.
//Display information as well.
#include <iostream>
#include <string>
using namespace std;
void info(string [], int [], int [], int [], char [], char [], int);
void IA(int [], int [], float [],int); 
void ID(int [], int [],float [],int);
void R(int [], char [], char [], float [], float [], float [],int);
void Inst();
void Pri1(string [], int [], int [], int [], char [], char [], float [],int);
void Pria(string [], int [], int [], int [], char [], char [], float [],int);


int main()
{
    string name[50];
    int age[50], income[50], dep[50], val, home2, marital2, count=0, n=0;
    char home[50], marital[50];
    float Ia[50], Id[50], r[50];
    
    do
    {
     cout<<"Please select an option from the menu:"<<endl;
     cout<<"1. Enter Info"<<endl;
     cout<<"2. Calc IA"<<endl;
     cout<<"3. Calc ID"<<endl;
     cout<<"4. Calc R"<<endl;
     cout<<"5. Instructions"<<endl;
     cout<<"6. Print 1"<<endl;
     cout<<"7. Print all"<<endl;
     cout<<"8. Quit"<<endl;
     cin>>val;
    
      if(val==1)
      {
        cout<<"Which person would you like to enter info for? (enter a number)"<<endl;
        cin>>n;
        info(name,age,income,dep,home,marital,n);
      }
      else if(val==2)
      {
        cout<<"Which person would you like to enter info for? (enter a number)"<<endl;
        cin>>n;
        IA(age,income,Ia,n);
      }
      else if(val==3)
      {
        cout<<"Which person would you like to enter info for? (enter a number)"<<endl;
        cin>>n;
        ID(income,dep,Id,n);
      }
      else if(val==4)
      {
        cout<<"Which person would you like to enter info for? (enter a number)"<<endl;
        cin>>n;
        R(income,home,marital,Ia,Id,r,n);
      }
      else if(val==5)
        Inst();
      else if(val==6)
      {
        cout<<"Which person would you like to enter info for? (enter a number)"<<endl;
        cin>>n;
        Pri1(name,age,income,dep,home,marital,r,n);
      }
      else if(val==7)
        Pria(name,age,income,dep,home,marital,r,count);
    if(n>count)
        count=n;
    }while(val!=8);
    return 0;
}

void info(string name[],int age[],int income[],int dep[],char home[],char marital[],int n)
//Purpose:Enter info for a person
//input: name, age, income, dependents, home ownership, marital status
//output: name, age, income, dependents, home ownership, marital status
{
    char awn;
    cout<<"enter a name: ";
    cin>>name[n];
    while(!cin)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"please enter a proper name: ";
        cin>>name[n];
    }
    cout<<"enter a age: ";
    cin>>age[n];
     while(!cin)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"please enter a proper age: ";
        cin>>age[n];
    }
     while(age[n]<1)
    {
        cout<<"Please enter a proper age! (above 0): ";
        cin>>age[n];
    }
    if(age[n]>100)
    {
        cout<<"Are you sure this age ("<<age[n]<<") is right? (y for yes, n for no): ";
        cin>>awn;
        if(awn!='y'&&awn!='n')
            {
                cout<<"Enter y or n!: ";
                cin>>awn;
            }
        while(awn=='n')
        {
            cout<<"enter a age: ";
            cin>>age[n];
            cout<<"Is the new number ("<<age[n]<<") correct?(y or n): ";
            cin>>awn;
            if(awn!='y'&&awn!='n')
            {
                cout<<"Enter y or n!: ";
                cin>>awn;
            }
        }
    }
    cout<<"enter a income: ";
    cin>>income[n];
     while(!cin)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"please enter a proper income amount: ";
        cin>>income[n];
    }
    while(income[n]<0)
    {
        cout<<"Please enter a proper income: ";
        cin>>income[n];
    }
    if(income[n]>1000000)
    {
        cout<<"Are you sure this income ("<<income[n]<<") is right? (y for yes, n for no): ";
        cin>>awn;
        if(awn!='y'&&awn!='n')
            {
                cout<<"Enter y or n!: ";
                cin>>awn;
            }
        while(awn=='n')
        {
            cout<<"enter a income: ";
            cin>>income[n];
            cout<<"Is the new number ("<<income[n]<<") correct?(y or n): ";
            cin>>awn;
            if(awn!='y'&&awn!='n')
            {
                cout<<"Enter y or n!: ";
                cin>>awn;
            }
        }
    }
    cout<<"enter number of dependents: ";
    cin>>dep[n];
     while(!cin)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"please enter a proper number for dependents: ";
        cin>>dep[n];
    }
    while(dep[n]<0)
    {
        cout<<"Please enter a proper number for dependents: ";
        cin>>dep[n];
    }
    if(dep[n]>10)
    {
        cout<<"Are you sure this number of dependents ("<<dep[n]<<") is right? (y for yes, n for no): ";
        cin>>awn;
        if(awn!='y'&&awn!='n')
            {
                cout<<"Enter y or n!: ";
                cin>>awn;
            }
        while(awn=='n')
        {
            cout<<"enter a number of dependents: ";
            cin>>dep[n];
            cout<<"Is the new number ("<<dep[n]<<") correct?(y or n): ";
            cin>>awn;
            if(awn!='y'&&awn!='n')
            {
                cout<<"Enter y or n!: ";
                cin>>awn;
            }
        }
    }
    cout<<"enter weather you rent or own your home (a for rent, b for own): ";
    cin>>home[n];
     while(!cin)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"please enter a proper awnser (a or b): ";
        cin>>home[n];
    }
    while(home[n]!='a'&&home[n]!='b')
    {
        cout<<"please enter a proper awnser (a or b: ";
        cin>>home[n];
    }
    cout<<"enter marital status (a for married, b for single, c for widowed, and d for divorced): ";
    cin>>marital[n];
     while(!cin)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"please enter a proper character (a or b): ";
        cin>>marital[n];
    }
    while(marital[n]!='a'&&marital[n]!='b'&&marital[n]!='c'&&marital[n]!='d')
    {
        cout<<"please enter a proper awnser (a, b, c, or d: ";
        cin>>marital[n];
    }
}

void IA(int age[],int income[],float Ia[],int n)
//Purpose:Calculate the IA for a person
//input: age, income, IA
//output: IA
{
    Ia[n]=income[n]/age[n];
    cout<<"Person "<<n<<" Ia is "<<Ia[n]<<endl;
}

void ID(int income[],int dep[],float Id[],int n)
//Purpose:Calculate the ID for a person
//input: Income, Dependents, ID
//output: ID
{
    Id[n]=income[n]/dep[n];
    cout<<"Person "<<n<<" Id is "<<Id[n]<<endl;
}

void R(int income[],char home[],char marital[],float Ia[],float Id[],float r[],int n)
//Purpose: Calculate the R for a person
//input: income, home ownership, marital status, IA, ID, R, n
//output: R
{
    int home2, marital2;
    if(home[n]=='a')
        home2=0.95;
    else
        home2=0.65;
    if(marital[n]=='a')
        marital2=0.65;
    else if(marital[n]=='b')
        marital2=0.8;
    else if(marital[n]=='c')
        marital2=0.5;
    else
        marital2=0.99;
    r[n]=home2*(Ia[n]+Id[n]/marital2+income[n]);
    cout<<"Person "<<n<<" R is "<<r[n]<<endl;
}

void Inst()
//Purpose: Instructions for this program
//input:nothing
//output:nothing
{
    cout<<"This program will organize and display info one people entered."<<endl;
    cout<<"Enter up to 50 peoples names, ages, annual income, number of dependents, weather they rent or own a home, and marital status.!"<<endl;
    cout<<"Choose up to 8 options on the menu. You can caluclate a persons IA, ID, or R!"<<endl;
    cout<<"You can also display one person or all peoples information!"<<endl;
}

void Pri1(string name[],int age[],int income[],int dep[],char home[],char marital[],float r[],int n)
//Purpose: Print info for one person
//input: name, age, income, dependents, home ownership, marital status, R
//output: 
{
    cout<<"Here is the info on person "<<n<<" :"<<endl;
    cout<<"name: "<<name[n]<<endl;
    cout<<"age: "<<age[n]<<endl;
    cout<<"Annual Income: "<<income[n]<<endl;
    cout<<"Number of Dependents: "<<dep[n]<<endl;
    cout<<"Do they own or rent a home: ";
    if(home[n]=='a')
        cout<<"rent"<<endl;
    else
        cout<<"own"<<endl;
        
    cout<<"Marital Status: ";
    if(marital[n]=='a')
        cout<<"Married"<<endl;
    else if(marital[n]='b')
        cout<<"Single"<<endl;
    else if(marital[n]='c')
        cout<<"Widowed"<<endl;
    else
        cout<<"Divorced"<<endl;
        
    if(r[n]!=0)
        cout<<"R number is: "<<r[n]<<endl<<endl;
    else
        cout<<"no R--------"<<endl<<endl;
}

void Pria(string name[],int age[],int income[],int dep[],char home[],char marital[],float r[],int count)
//Purpose:Print info for all people
//input: name, age, income, dependents, home ownership, marital status
//output:
{
    int n;
    n=1;
    while(n<count);
    {
        cout<<"Here is the info on person "<<n<<" :"<<endl;
        cout<<"name: "<<name[n]<<endl;
        cout<<"age: "<<age[n]<<endl;
        cout<<"Annual Income: "<<income[n]<<endl;
        cout<<"Number of Dependents: "<<dep[n]<<endl;
        cout<<"Do they own or rent a home: ";
        if(home[n]=='a')
            cout<<"rent"<<endl;
        else
            cout<<"own"<<endl;
        
        cout<<"Marital Status: ";
        if(marital[n]=='a')
            cout<<"Married"<<endl;
        else if(marital[n]='b')
            cout<<"Single"<<endl;
        else if(marital[n]='c')
            cout<<"Widowed"<<endl;
        else
            cout<<"Divorced"<<endl;
        
        if(r[n]!=0)
            cout<<"R number is: "<<r[n]<<endl<<endl;
        else
            cout<<"no R--------"<<endl<<endl; 
        n++;
    }
}