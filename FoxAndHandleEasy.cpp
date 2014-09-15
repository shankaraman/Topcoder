#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string S,T,p="",q="";
    int count=0;
    cout<<"\nEnter the S and T:";
    cin>>S>>T;
    vector <string> lst;
    for(int i=0;i<S.size();i++)
    {
        p+=S[i];
        q="";
        for(int j=i+1;j<S.size();j++)
        {
            if (j == S.size())
            {
                break;
            }
            q+=S[j];

        }
        lst.push_back(p+S+q);
    }
    for(int i=0;i<lst.size();i++)
    {
        if (T == lst[i])
        {
            count++;
        }
    }
    if (count)
    {
        cout<<"\nTrue:"<<"\n";
    }
    else
    {
        cout<<"\nFalse!"<<"\n";
    }
    return 0;
}
