//Assignment: Exam Assignment/Mckendree's Got Talent
//Name: Jenna Wolf
//Date: November 10th, 2022
//Purpose Take in all scores and names of contestants. Calculate the average. Display all information
//(names, scores, averages). Then find the highest score and display name and score as winner.
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void getJudgeData(string[],float[][5]);
void calcScore(float[][5],float[]);
float Highest(float[],int&);
void Print(string[],float[][5],float[]);
int main()
{
    string names[10];
    float scores[10][5];
    float ave[10];
    getJudgeData(names,scores);
    calcScore(scores,ave);
    Print(names,scores,ave);
    
    return 0;
}
void getJudgeData(string names[],float scores[][5])
//purpose: read in the file data into an array
//input: names[],scores[][5]
//output: names[],scores[][5]
{
    ifstream ifp;
    string filename;
    int i;
    ifp.open("Scores.txt");
    if (!ifp)
        cout<<"Error"<<endl;
    for(i=0;i<10;i++)
        ifp>>names[i]>>scores[i][0]>>scores[i][1]>>scores[i][2]>>scores[i][3]>>scores[i][4];
}
void calcScore(float scores[][5],float ave[])
//purpose: calculate the average of the scores
//input: scores[][5], ave[]
//output: average
{
  float x=0;
  int row, col;
  for(row=0;row<10;row++)
  {
        for(col=0;col<5;col++)
        {
            x=x+scores[row][col];
        }
        ave[row]=x/5;
        x=0;
  }
}
float Highest(float ave[],int &i)
//purpose: Find the highest average score
//input: ave[][5], &i
//output: highest
{
    float high;
    int count;
    high=ave[0];
    for(count=1;count<10;count++)
    {
    if(ave[count]>high)
    {
        high=ave[count];
        i=count;
    }
    }
    return high;

}
void Print(string names[],float scores[][5],float ave[])
//purpose: Print out all information (names, scores, winner, etc.)
//input: name[], scores[][5], ave[]
//output:
{
    int i;
    float high;
    for(i=0;i<10;i++)
    {
        cout<<names[i]<<" "<<scores[i][0]<<" "<<scores[i][1]<<" "<<scores[i][2]<<" "<<scores[i][3]<<" "<<scores[i][4];
        cout<<"   Average Score: "<<ave[i]<<endl;
    }
    high=Highest(ave, i);
    cout<<"Congrats "<<names[i]<<"! You won with a score of "<<high<<"!"<<endl;
}