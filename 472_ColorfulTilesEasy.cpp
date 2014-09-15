#include<iostream>
#include<string>
using namespace std;
int main()
{
    char dup[20];
    int count=0;
    string room;
    cin>>room;
    for(int i=0;i<room.size();i++)
    {
        dup[i] = room[i];
    }
    for(int i=0;i<room.size();i++)
    {
        if(dup[i] == dup[i+1] && i!=room.size()-1)
        {
            dup[i+1] = 'x';
            count++;
        }
    }
    cout<<"\nAns is:"<<count;
    return 0;
}
