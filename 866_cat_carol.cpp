#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    vector <int> length;
    vector <int> distinct;
    vector <int> final;
    int n,m,p,q,sum=0;
    cout<<"\nEnter the number of chopsticks:";
    cin>>n;
    cout<<"\nEnter the list:";
    for (int i=0;i<n;i++)
    {
        cin>>m;
        length.push_back(m);
    }
    set<int> s(length.begin(),length.end());
    for(set<int>::iterator i = s.begin();i != s.end();i++)
   {
        int w = *i;
        distinct.push_back(w);
    }
    for(int i=0;i<distinct.size();i++)
    {
        p = 0;
        for(int j=0;j<length.size();j++)
        {
            if (distinct[i] == length[j])
            {
                p++;
            }
        }
        if (p>0)
        {
            final.push_back(p);
        }
    }
    for (int i=0;i<final.size();i++)
    {
            q = final[i]/2;
            sum = sum + q;   
    }
    cout << "\nI think i am right:"<<sum;
    return 0;
}
