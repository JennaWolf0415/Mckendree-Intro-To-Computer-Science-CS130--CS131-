#include <iostream>
using namespace std;
void redHat(int);
void blueHat(int);
int main()
{
    int awn;
    do
    {
    cout<<"Pick an option!"<<endl;
    cout<<"1.Redhat"<<endl;
    cout<<"2.Bluehat"<<endl;
    cout<<"3.Quit"<<endl;
    cin>>awn;
    while(awn!=1&&awn!=2&&awn!=3)
        {
        cout<<"Error, please pick one of the options"<<endl;
        cin>>awn;
        }
    if(awn==1)
        redHat(awn);
    else if(awn==2)
        blueHat(awn);
    } while(awn!=3);

    return (0);
}

void redHat(int awn)
{
    cout<<"If real is what you can feel, smell, taste and see, then real is simply electrical signals interpreted by your brain."<<endl; 
}
void blueHat(int awn)
{
    cout<<"This is your last chance. After this, there is no turning back. You take the blue hat -- the story ends, you wake up in your bed and believe whatever you want to believe. You take the red hat -- you stay in Wonderland and I show you how deep the rabbithole goes"<<endl;
}