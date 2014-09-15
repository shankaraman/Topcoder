#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n,h,k;
    vector <int> pattern,distinct,solved;
    set <int> s;
    cout<<"\nEnter the limit and pattern:";
    cin>>h;
    for(int i=0;i<h;i++)
    {
        cin>>n;
        pattern.push_back(n);
        s.insert(n);
    }
    for(set<int>::iterator i=s.begin();i!=s.end();i++)
    {
        distinct.push_back(*i);
    }
    if (distinct.size() == pattern.size())
    {
        cout<<"\nWinner is:"<<pattern[0];
    }
    else
    {
        for(int i=0;i<distinct.size();i++)
        {
            int count = 0;
            for(int j=0;j<pattern.size();j++)
            {
                if (distinct[i] == pattern[j])
                {
                    count+=1;
                }
            }
            solved.push_back(count);
        }
        int max = *max_element(solved.begin(),solved.end());
        for(int i=0;i<solved.size();i++)
        {
            if (max == solved[i])
            {
                k=distinct[i];
            }
        }
        cout<<"\nResult is:"<<k;
    }    
    return 0;
}
