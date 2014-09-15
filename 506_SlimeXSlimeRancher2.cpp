#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> a,sorted;
    int lmt,sum=0,take,lmt1;
    cout<<"\nEnter the limit:";
    cin>>lmt;
    for(int i=0;i<lmt;i++)
    {
        cin>>lmt1;
        a.push_back(lmt1);
    }
    sort(a.begin(),a.end());
    for (int i=0;i<a.size();i++)
    {
        sorted.push_back(a[i]);
    }  
   int max = sorted[a.size()-1]; 
   for (int i=0;i<a.size();i++)
   {
       cout<<"\t"<<max<<"\t"<<sorted[i]<<"\n";
       take = max-sorted[i];
       sum+=take;
    }
   cout<<sum;
}
