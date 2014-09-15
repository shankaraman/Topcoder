#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main()
{
    vector<int> dps,hp,s;
    int h,p,sum=0,d,rd,rh,final=0;
    cout<<"\nEnter the range of dps and hp:";
    cin>>rd>>rh;
    cout<<"\nEnter the dps elements:";
    for(int i=0;i<rd;i++)
    {
        cin>>d;
        dps.push_back(d);
    }
    cout<<"\nEnter the hp elements:";
    for(int i=0;i<rh;i++)
    {
        cin>>h;
        hp.push_back(h);
    }
    for (int i=0;i<rh;i++)
    {
        sum = 0;
        for (int j=i;j<rd;j++)
        {
            sum+=dps[j];
        }
        s.push_back(hp[i]*sum);
    }
    for (int i=0;i<s.size();i++)
    {
        final+=s[i];
    }
    cout<<final;
    return 0;
}
