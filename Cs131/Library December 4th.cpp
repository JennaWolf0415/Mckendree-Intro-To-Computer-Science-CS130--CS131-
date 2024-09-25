//assignment: Library Books
//name: Jenna Wolf
//date: December 4th 2022
//purpose: Let user input library books as well as print them out (one at a time, all together, or all with the same letter)
#include <iostream>
using namespace std;
struct book{
            string title, author;
            int ISBN[13], pages, year;
           };
void input(book[]);
void output1(book[]);
void outputall(book[]);
void outputletter(book[]);
int main()
{
    int awn, awn2, i, a;
    book b[25];
    for(i=0;i<25;i++)
    {
        b[i].title=' ';
        b[i].author=' ';
        for(a=0;a<13;a++)
            b[i].ISBN[a]=0;
        b[i].pages=0;
        b[i].year=0;
    }
do{
        cout<<"Please pick one:"<<endl;
        cout<<"1.Input a books info"<<endl;
        cout<<"2.Output a books info"<<endl;
        cout<<"3.Quit"<<endl;
        cin>>awn;
        while(awn!=1&&awn!=2&&awn!=3)
        {
            cout<<"enter a proper answer!";
            cin>>awn;
        }
        if(awn==1)
            input(b);
        else if(awn==2)
        {
            cout<<"please pick one:"<<endl;
            cout<<"1.Info for one book"<<endl;
            cout<<"2.Info for all books"<<endl;
            cout<<"3.Info for books starting with a letter"<<endl;
            cin>>awn2;
            while(awn!=1&&awn!=2&&awn!=3)
            {
                cout<<"enter a proper answer!";
                cin>>awn;
            }
            if(awn2==1)
                output1(b);
            else if (awn2==2)
                outputall(b);
            else
                outputletter(b);
        }
            
        
  }while(awn!=3);
    return 0;
}

void input(book b[])
//purpose: input info for a book
//input: b[]
//output: b[]
{
    int i,a;
    cout<<"enter the # for the book you wish to enter data for: ";
    cin>>i;
    cout<<"enter the tile: ";
    cin.ignore();
    getline(cin,b[i].title);
    cout<<"enter author: ";
    getline(cin,b[i].author);
    cout<<"enter ISBN(one number at a time): ";
    for(a=0;a<13;a++)
        cin>>b[i].ISBN[a];
    cout<<"enter number of pages: ";
    cin>>b[i].pages;
    cout<<"enter year published: ";
    cin>>b[i].year;
}

void output1(book b[])
//purpose: output single book
//input: b[]
//output: b[]
{
    int i,a;
    cout<<"enter the # for the book you wish to print: ";
    cin>>i;
    cout<<"-----------------------------------"<<endl;
    cout<<"title: "<<b[i].title<<endl;
    cout<<"author: "<<b[i].author<<endl;
    cout<<"ISBN: "<<b[i].ISBN[0]<<b[i].ISBN[1]<<b[i].ISBN[2]<<"-"<<b[i].ISBN[3]<<"-"<<b[i].ISBN[4]<<b[i].ISBN[5];
    cout<<"-"<<b[i].ISBN[6]<<b[i].ISBN[7]<<b[i].ISBN[8]<<b[i].ISBN[9]<<b[i].ISBN[10]<<b[i].ISBN[11]<<"-"<<b[i].ISBN[12]<<endl;
    cout<<"pages: "<<b[i].pages<<endl;
    cout<<"year released: "<<b[i].year<<endl;
    cout<<"-----------------------------------"<<endl;
}

void outputall(book b[])
//purpose: output all books
//input: b[]
//output: b[]
{
    int i;
    for(i=0;i<25;i++)
    {
        if(b[i].year!=0)
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"title: "<<b[i].title<<endl;
            cout<<"author: "<<b[i].author<<endl;
            cout<<"ISBN: "<<b[i].ISBN[0]<<b[i].ISBN[1]<<b[i].ISBN[2]<<"-"<<b[i].ISBN[3]<<"-"<<b[i].ISBN[4]<<b[i].ISBN[5];
            cout<<"-"<<b[i].ISBN[6]<<b[i].ISBN[7]<<b[i].ISBN[8]<<b[i].ISBN[9]<<b[i].ISBN[10]<<b[i].ISBN[11]<<"-"<<b[i].ISBN[12]<<endl;
            cout<<"pages: "<<b[i].pages<<endl;
            cout<<"year released: "<<b[i].year<<endl;
            cout<<"-----------------------------------"<<endl;
        }
        else
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"nothing here yet!"<<endl;
            cout<<"-----------------------------------"<<endl;
        }
    }
    
}

void outputletter(book b[])
//purpose: output books starting with same letter.
//input: b[]
//output: b[]
{
    int i;
    char c;
    cout<<"What letter would you like to search for?: ";
    cin>>c;
    for(i=0;i<25;i++)
    {  
        if(b[i].title.at(0)==c)
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"title: "<<b[i].title<<endl;
            cout<<"author: "<<b[i].author<<endl;
            cout<<"ISBN: "<<b[i].ISBN[0]<<b[i].ISBN[1]<<b[i].ISBN[2]<<"-"<<b[i].ISBN[3]<<"-"<<b[i].ISBN[4]<<b[i].ISBN[5];
            cout<<"-"<<b[i].ISBN[6]<<b[i].ISBN[7]<<b[i].ISBN[8]<<b[i].ISBN[9]<<b[i].ISBN[10]<<b[i].ISBN[11]<<"-"<<b[i].ISBN[12]<<endl;
            cout<<"pages: "<<b[i].pages<<endl;
            cout<<"year released: "<<b[i].year<<endl;
            cout<<"-----------------------------------"<<endl;
        }
    }
}