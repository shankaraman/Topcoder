#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string orig,final;
    vector <string> test;
    cout<<"\nEnter the Original and Final String:";
    cin>>orig>>final;
    int k,w=0;
    cout<<"\nEnter the moves:";
    cin>>k;
    for (int i=0;i<orig.size();i++)
    {
        w+=(orig[i] != final[i]);
        cout<<w;
    }
/*
    if (k>=0)
    {
        cout<<"\nPossible:"<<"\n";
    }
    else
    {
        cout<<"\nImpossible:"<<"\n";
    }*/
    return 0;
}
