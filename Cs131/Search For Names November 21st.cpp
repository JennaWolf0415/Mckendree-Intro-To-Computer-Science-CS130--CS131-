//Assignment: Name BinarySearch
//Name: Jenna Wolf
//Date: November 21st 2022
//Purpose: Search for names in an array. If the name is there, state where it is alphabetically.
//if it is not, say that it is not.

#include <iostream>

using namespace std;
void sort(string[],int);
void swap(string&,string&);
void search(string[],int,string);
int main()
{
    int size=20;
    char awn;
    string name;
    string names[size]={ "Collins,Bill", "Smith,Bart", "Allen,Jim", "Griffin,Jim", 
                        "Stamey,Marty", "Rose,Geri", "Taylor,Terri", "Johnson,Jill",  "Allison,Jeff", 
                        "Looney,Joe", "Wolfe,Bill",	"James,Jean", "Weaver,Jim", "Pore,Bob", "Rutherford,Greg", 
                        "Javens,Renee",	"Harrison,Rose", "Setzer,Cathy", "Pike,Gordon", "Holland,Beth" };
    sort(names,size);
    do
    {
        cout<<"please enter a name (lastname,firstname): ";
        cin>>name;
        search(names,size,name);
        cout<<"Would you like to continue? (y or n): ";
        cin>>awn;
        if(awn!='y'&&awn!='n')
        {
            cout<<"Please enter a proper answer!: ";
            cin>>awn;
        }
    }while(awn!='n');
    return 0;
}
void sort(string names[],int size)
//purpose:Sort the names into alphabetical order
//input: names, size
//output: names
{
    int minI;
    string minV;
    for (int i=0;i<(size-1);i++)
    {
        minI=i;
        minV=names[i];
        for (int index=i+1;index<size;index++)
        {
            if(names[index]<minV)
            {
                minV=names[index];
                minI=index;
            }
        }
        swap(names[minI],names[i]);
    }
}
void swap(string &a,string &b)
//purpose:swap names
//input: names, names
//output: names, names
{
    string temp=a;
    a=b;
    b=temp;
}
void search(string names[],int size,string name)
{ 
//purpose: search for the entered name
//input: names, size, name
//output: 
    int first=0,last=size-1,middle,position=-1;
    bool found=false;
    while(!found&&first<=last)
    { 
        middle=(first+last)/2;
        if(names[middle]==name)
        { 
            found=true;
            position=middle;
        }
        else if(names[middle]>name)
            last=middle-1;
        else
            first=middle+1;
    }
    if(!found)
        cout<<name<<" is not in this array!"<<endl;
    else
        cout<<name<<" is in this array in position "<<position<<endl;
}
