//assignment: Mckendree's Got Talent
//name: Jenna Wolf
//date: November 8th 2022
//purpose: Read in a file with scores from judges. Find the highest and the lowest scores,
//drop them, and average out the other 3 scores.
#include <iostream>
#include <fstream>
#include <iomanip>
void getJudgeData(float[]);
void calcScore(float[]);
float Lowest (float[]);
float Highest (float[]);
using namespace std;

int main()
{
    float scores[5];
    getJudgeData(scores);
    calcScore(scores);
    return 0;
}

void getJudgeData(float scores[])
//purpose: read in the file data into an array
//input: scores[]
//output: scores[]
{
    ifstream ifp;
    string filename;
    string any;
    int i;
    ifp.open("Scores.txt");
       if (!ifp)
        cout<<"Error"<<endl;
    ifp>>any;
    ifp>>any;
    for(i=0;i<5;i++)
    ifp>>any>>scores[i];
}
void calcScore(float scores[])
//purpose: calculate the average of the 3 scoers (excluding the highest and lowest)
//input: scores
//output: average
{
    cout<<fixed<<showpoint<<setprecision(2);
    float low,high,average;
    low=Lowest(scores);
    high=Highest(scores);
    average=scores[0]+scores[1]+scores[2]+scores[3]+scores[4];
    average=average-high-low;
    average=average/3;
    cout<<"Contestants final score is "<<average<<endl;
}
float Lowest(float s[])
//purpose: find the lowest scores
//input: scores
//output: low
{
    float low;
    int i;
    low=s[0];
    for(i=1;i<5;i++)
    {
    if(s[i]<low)
        low=s[i];
    }
    return low;
}
float Highest(float s[])
//purpose: find the highest score
//input: scores
//output: high
{
    float high;
    int i;
    high=s[0];
    for(i=1;i<5;i++)
    {
    if(s[i]>high)
        high=s[i];
    }
    return high;
}