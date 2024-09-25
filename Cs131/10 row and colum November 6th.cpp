//Assignment: Row and Column Array
//Name: Jenna Wolf
//Date: 11/6/2022
//Purpose: Program determins weather row is divisable by column. If it is, then row # is put in
//array spot. If not, column # is. dividing by 0 does not count. Then print out chart or #'s.
#include <iostream>

using namespace std;

int main()
{
    int row,col;
    int array[10][10]; 
    for (row=0;row<10;++row)
    {
        for(col=0;col<10;++col)
        {
            if(col!=0&&row%col==0)
            {
                 array[row][col]=row;
            }
            else
            {
                 array[row][col]=col;
            }
            
            
        }
    }
    for(row=0;row<10;++row)
    {
        for(col=0;col<10;++col)
        {
        cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}