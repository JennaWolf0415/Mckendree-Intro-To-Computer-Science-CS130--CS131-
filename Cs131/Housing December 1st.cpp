//Assignment:
//Name:
//Date:
//Purpose:
#include <iostream>
#include <fstream>
using namespace std;
struct listing{
                int Id, LotArea, OverallCond, YearBuilt, LivArea, FullBath, Bedroom;
                int TotRmsAbvGrd, GarageCars, MoSold, YrSold, SalePrice;
              };
void file(listing[]);
void sort1(int []);
void mean(int []);
void median(int []);
void small(int []);
void large(int []);
void kth(int []);
void value(int []);
int main()
{
    int Awn, Ch, i, A[260];
    listing l[260];
    file(l);
    do{
        cout<<"pick an option:"<<endl;
        cout<<"1.ID"<<endl;
        cout<<"2.Lot Area"<<endl;
        cout<<"3.Overall Condition"<<endl;
        cout<<"4.Year Built"<<endl;
        cout<<"5.Liv Area"<<endl;
        cout<<"6.Full Bath"<<endl;
        cout<<"7.Bedroom"<<endl;
        cout<<"8.Total Rooms Above Ground"<<endl;
        cout<<"9.Garage Cars"<<endl;
        cout<<"10.Mo Sold"<<endl;
        cout<<"11.Year Solf"<<endl;
        cout<<"12.Sale Price"<<endl;
        cout<<"13.Quit"<<endl;
        cin>>Awn;
        if(Awn==1)
        {
            for(i=0;i<260;i++)
                A[i]=l[i].Id;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==2)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].LotArea;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==3)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].OverallCond;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==4)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].YearBuilt;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==5)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].LivArea;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==6)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].FullBath;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==7)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].Bedroom;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==8)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].TotRmsAbvGrd;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==9)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].GarageCars;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==10)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].MoSold;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==11)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].YrSold;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
        else if(Awn==12)
        {
            for(i=0;i<261;i++)
                A[i]=l[i].SalePrice;
            sort1(A);
            mean(A);
            median(A);
            small(A);
            large(A);
            kth(A);
            value(A);
        }
    }while(Awn!=13);

    return 0;
}
void file(listing l[])
//purpose: read in the file data into an array
//input: names[],scores[][5]
//output: names[],scores[][5]
{
    string any;
    ifstream ifp;
    string filename;
    int i;
    ifp.open("info.txt");
    if (!ifp)
        cout<<"Error"<<endl;
    for(i=0;i<12;i++)
        ifp>>any;
    for(i=0;i<260;i++)
        ifp>>l[i].Id>>l[i].LotArea>>l[i].OverallCond>>l[i].YearBuilt>>l[i].LivArea>>l[i].FullBath>>l[i].Bedroom>>l[i].TotRmsAbvGrd>>l[i].GarageCars>>l[i].MoSold>>l[i].YrSold>>l[i].SalePrice;
}
void sort1(int A[])
//purpose:Sort LotArea
//input:
//output:
{  
    int minI, minV;
    int size=260;
    for (int start=0;start<(size-1);start++)
    {
        minI=start;
        minV=A[start];
        for (int index=start+1;index<size;index++)
        {
            if(A[index]<minV)
            {
                minV=A[index];
                minI=index;
            }
        }
        swap(A[minI],A[start]);
    }
}
void swap(int &a,int &b)
//purpose:
//input:
//output:
{
    int temp=a;
    a=b;
    b=temp;
}
void mean(int A[])
//purpose:
//input:
//output:
{
    float total=0;
    for(int i=0;i<260;i++)
        total=total+A[i];
    total=total/260;
    cout<<"The mean is: "<<total<<endl<<endl;
}
void median(int A[])
//purpose:
//input:
//output:
{
    int a,b;
    float median;
    if(260%2==1)
        cout<<"Median is: "<<A[260/2]<<endl<<endl;
    else
    {
        a=260/2;
        b=a-1;
        median=(A[a]+A[b])/2;
        cout<<"Median is: "<<median<<endl<<endl;
    }
}
void small(int A[])
//purpose:
//input:
//output:
{
    cout<<"The smallest value is "<<A[0]<<endl<<endl;
}
void large(int A[])
//purpose:
//input:
//output:
{
    cout<<"The largest value is "<<A[259]<<endl<<endl;
}
void kth(int A[])
//purpose:
//input:
//output:
{
    int k;
    float val;
    cout<<"Which largest value would you like to find? ";
    cin>>k;
    if(k>260)
        {
            cout<<"Enter a value that is less than the size of the arary: ";
            cin>>k;
        }
    k=260-k;
    val=A[k];
    cout<<"Your "<<k<<"th largest value is "<<val<<endl<<endl;
}
void value(int A[])
//purpose:
//input:
//output:
{ 
    int first=0,last=259,mid,position=-1;
    float val;
    bool found = false;
    cout<<"What value do you want to find? ";
    cin>>val;
    while (!found&&first<=last)
        {
            mid=(first+last)/2; 
            if (A[mid]==val)
            { 
                found=true;
                position=mid;
            }
            else if (A[mid]>val)
                last=mid-1;
            else
                first=mid+1;
        }
    if(!found)
        cout<<"Value does not exist in array"<<endl<<endl;
    else
        cout<<"Value is in array at position "<<position<<endl<<endl;
}