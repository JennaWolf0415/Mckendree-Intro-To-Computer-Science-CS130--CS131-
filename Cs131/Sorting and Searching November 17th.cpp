//Assignment:
//Name:
//Date:
//Purpose:
#include <iostream>
#include <fstream>
using namespace std;
void readFromFile(float[], int&);
void sort(float[],int);
void swap(int&,int&);
void mean(float[],int);
void median(float[],int);
void small(float[]);
void large(float[],int);
void kth(float[],int);
void value(float[],int);

int main()
{
    int size, awn;
    float values[100];
    readFromFile(values,size);
    sort(values,size);
    do
    {
        cout<<"Choose one option:"<<endl;
        cout<<"1.mean"<<endl;
        cout<<"2.medium"<<endl;
        cout<<"3.smallest"<<endl;
        cout<<"4.largest"<<endl;
        cout<<"5.kth largest"<<endl;
        cout<<"6.find a value"<<endl;
        cout<<"7.Quit"<<endl;
        cin>>awn;
        while(awn!=1&&awn!=2&&awn!=3&&awn!=4&&awn!=5&&awn!=6&&awn!=7)
            {
            cout<<"Pick a proper option!"<<endl;
            cin>>awn;
            }
        if(awn==1)
            mean(values,size);
        else if(awn==2)
            median(values,size);
        else if(awn==3)
            small(values);
        else if(awn==4)
            large(values,size);
        else if(awn==5)
            kth(values,size);
        else if(awn==6)
            value(values,size);
        
    }while(awn!=7);
    return 0;
}
void readFromFile(float values[],int &size)
//purpose: read in the file data into an array
//input: Values[]
//output: Values[]
{
    ifstream ifp;
    string filename;
    int i;
    ifp.open("values.txt");
    if (!ifp)
        cout<<"Error"<<endl;
    i=0;
    while(ifp>>values[i])
        i++;
    size=i;
}
void sort(float values[],int size)
//purpose:
//input:
//output:
{
    int minI, minV;
    for (int start=0;start<(size-1);start++)
    {
        minI=start;
        minV=values[start];
        for (int index=start+1;index<size;index++)
        {
            if(values[index]<minV)
            {
                minV=values[index];
                minI=index;
            }
        }
        swap(values[minI],values[start]);
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
void mean(float values[],int size)
//purpose:
//input:
//output:
{
    float total=0;
    for(int i=0;i<size;i++)
        total=total+values[i];
    total=total/size;
    cout<<"The mean is: "<<total<<endl<<endl;
}
void median(float values[],int size)
//purpose:
//input:
//output:
{
    int a,b;
    float median;
    if(size%2==1)
        cout<<"Median is: "<<values[size/2]<<endl<<endl;
    else
    {
        a=size/2;
        b=a-1;
        median=(values[a]+values[b])/2;
        cout<<"Median is: "<<median<<endl<<endl;
    }
}
void small(float values[])
//purpose:
//input:
//output:
{
    cout<<"The smallest value is "<<values[0]<<endl<<endl;
}
void large(float values[],int size)
//purpose:
//input:
//output:
{
    cout<<"The largest value is "<<values[size-1]<<endl<<endl;
}
void kth(float values[],int size)
//purpose:
//input:
//output:
{
    int k;
    float val;
    cout<<"Which largest value would you like to find? ";
    cin>>k;
    if(k>size)
        {
            cout<<"Enter a value that is less than the size of the arary: ";
            cin>>k;
        }
    k=size-k;
    val=values[k];
    cout<<"Your "<<k<<"th largest value is "<<val<<endl<<endl;
}
void value(float values[],int size)
//purpose:
//input:
//output:
{ 
    int first=0,last=size-1,mid,position=-1;
    float val;
    bool found = false;
    cout<<"What value do you want to find? ";
    cin>>val;
    while (!found&&first<=last)
        {
            mid=(first+last)/2; 
            if (values[mid]==val)
            { 
                found=true;
                position=mid;
            }
            else if (values[mid]>val)
                last=mid-1;
            else
                first=mid+1;
        }
    if(!found)
        cout<<"Value does not exist in array"<<endl<<endl;
    else
        cout<<"Value is in array at position "<<position<<endl<<endl;
}