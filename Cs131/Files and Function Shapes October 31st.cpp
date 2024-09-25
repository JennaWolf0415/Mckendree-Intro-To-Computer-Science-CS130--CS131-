//Assignment: Shapes using file and functions
//Name: Jenna Wolf
//Date: October 31st, 2022
//Purpose: Mix file and functions. Open a file and then direct info from the file to different functions, with each function doing
//something different.
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int ReadData (ifstream &, float &);
void SumData (float &, float);
void PrintIt (float);

int main()
{
    ifstream ifp;
    string filename;
    string any;
    int taf;
    float sum=0;
    float area;
    
    ifp.open("Shapes.txt");
    if (!ifp)
        cout<<"Error"<<endl;
    ifp>>any;
    ifp>>any;
    //This do while loop finds true and false and caluculates the sum answer.
    do
    {
        taf=ReadData (ifp, area);
        if (taf==1)
        {
            SumData(sum, area);
        }
    }while(taf!=0);
    
    PrintIt(sum);
    return 0;
}

int ReadData (ifstream &ifp,float &area)
{
    //Purpose: find if there are lines left in shapes file and get area number.
    //Input: ifp, area
    //Output: taf (true and false), area
    string infile;
    if (ifp>>infile>>area)
        return 1;
    else return 0;
}
void SumData (float &sum, float area)
{
    //Purpose: add area to the sum
    //Input: sum, area
    //Output: sum
    sum=sum+area;
}
void PrintIt (float sum)
{
    //Purpose: Print the sum
    //Input: sum
    //Output: sum
    cout<<"The sum of all areas is "<<sum<<endl;
}