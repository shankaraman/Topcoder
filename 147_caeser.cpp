#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector <char> alter;
    vector <char> alpha;
    string caeser,converted;
    char temp;
    int i=65,lt=90,m=0,key;
    cout<<"\nEnter the Key:";
    cin>>key;
    cout<<"\nEnter the Phrase:";
    cin>>caeser;
    int p = key-1;
    for(int i=65;i<=90;i++)
    {
        alpha.push_back((char)i);
    }
    for (i=65;i<=lt-key;i++)
    {
        if (key == 0)
        {
            cout<<"\n"<<caeser;
        }
        else
        {
            while (p >= 0)
            {
                alter.push_back((char)(lt-p));
                p-=1;
            }
            alter.push_back((char) i);
        }
    }
    for (m=0;m<caeser.size();m++)
    {
        for (int n=0;n<alpha.size();n++)
        {
            if (caeser[m] == alpha[n])
            {
                converted+=alter[n];
            }
        }
    }
    cout<<"\nFinal:"<<converted;
    return 0;
}
