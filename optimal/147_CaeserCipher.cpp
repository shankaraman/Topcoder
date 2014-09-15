#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int key;
    char temp;
    string res,text;
    cout<<"\nEnter the text:";
    cin>>text;
    cout<<"\nEnter the key:";
    cin>>key;
    res.clear();
    for(int i=0;i<text.size();i++)
    {
        temp = text[i] - key;
        cout<<"\n"<<temp<<" "<<text[i]<<" "<<key;
        if(temp<'A')
        {
            temp+=26;
        }
        res.push_back(temp);
    }
    cout<<res;
}
