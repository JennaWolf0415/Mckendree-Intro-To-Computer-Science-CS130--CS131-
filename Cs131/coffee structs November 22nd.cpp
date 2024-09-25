//name: Jenna Wolf
//assignment: Struct Coffee Assignment
//date: November 22nd 2022
//purpose: Use structs to determine the price of coffee
#include <iostream>

using namespace std;
struct order
    {
        string name;
        float cost;
        int strength;
        int sugar;
        bool cream;
    };
int main()
{
    string name;
    char awn;
    float cost,str,s,c;
    order o;
    do
    {
        cout<<"Which Coffee?(columbian, french roast, italian blend, or house)(all lowercase): ";
        getline(cin,o.name);
        while(o.name!="columbian"&&o.name!="french roast"&&o.name!="italian blend"&&o.name!="house")
        {
            cout<<"Please enter a proper coffee name"<<endl;
            cin>>o.name;
        }
        cout<<"What is the strength?(1-light,2-medium,3-strong): ";
        cin>>o.strength;
        while(o.strength>3||o.strength<1)
        {
            cout<<"Please enter a proper strength level"<<endl;
            cin>>o.strength;
        }
        cout<<"What is the amount of sugar?(0, 1, 2, 3, or 4): ";
        cin>>o.sugar;
        while(o.sugar>4||o.sugar<0)
        {
            cout<<"Please enter a proper sugar level"<<endl;
            cin>>o.sugar;
        }
        cout<<"Any Cream?(1 for yes, 0 for no): ";
        cin>>o.cream;
        if(o.name=="columbian" || o.name=="house")
        {
            if(o.strength==1)
                str=1.25;
            else if(o.strength==2)
                str=1.5;
            else
                str=1.75;
        }
        else
        {
            if(o.strength==1)
                str=2;
            else if(o.strength==2)
                str=2.25;
            else
                str=2.50;
        }
        s=o.sugar*.25;
        if(!o.cream)
            c=0;
        else
            c=.15;
        cost=str+s+c;
        cout<<"Recipt"<<endl;
        cout<<"________________"<<endl;
        cout<<"type: "<<o.name<<endl;
        cout<<"strength level: "<<o.strength<<endl;
        cout<<"amount of sugar: "<<o.sugar<<endl;
        if(!o.cream)
            cout<<"no cream"<<endl;
        else
            cout<<"cream"<<endl;
        cout<<"Total Cost: "<<cost<<endl;
        cout<<"________________"<<endl;
        cout<<"Would you like to enter another coffee?(y or n)"<<endl;
        cin>>awn;
    }while(awn!='n');
    
    return 0;
}