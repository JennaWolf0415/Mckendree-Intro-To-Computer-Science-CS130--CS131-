
#include <iostream>

using namespace std;

int main()
{
  int ans=34;
  int x=0;
  
  do
    {
    cout<<"What is your guess? ";
    cin>>x;
    if (x>ans)
        cout<<"Number is lower!"<<endl;
    else if (x<ans)
        cout<<"Number is higher!"<<endl;
    else
        cout<<"You got it!";
    } while (x!=ans);

    return 0;
}
