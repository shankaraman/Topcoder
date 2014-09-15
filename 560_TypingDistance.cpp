#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string keyword,word;
    cout<<"\nEnter the Keyboard and Word:";
    cin>>keyword>>word;
    int result=0,sum=0;
    for(int i=0;i<word.size()-1;i++)
    {
        result = keyword.find(word[i])-keyword.find(word[i+1]);
        if (result < 0)
        {
            result*=-1;
        }
        sum+=result;
    }
    cout<<"\nSum:"<<sum<<"\n";
    
    return 0;
}
