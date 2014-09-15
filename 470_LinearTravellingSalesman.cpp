#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int ltx,lty,ex,ey;
    cout<<"Enter the x limit:";
    cin>>ltx;
    cout<<"\nEnter the y limit:";
    cin>>lty;
    vector <int> x,y;
    cout<<"\nEnter the x elements:";
    for(int i=0;i<ltx;i++)
    {
        cin>>ex;
        x.push_back(ex);
    }
    for(int i=0;i<lty;i++)
    {
        cin>>ey;
        y.push_back(ey);
    }
    cout<<((*max_element(x.begin(),x.end())-*min_element(x.begin(),x.end()))+(*max_element(y.begin(),y.end())-*min_element(y.begin(),y.end())));
}
