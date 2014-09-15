#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int fuel,no,data,sum=0,count=0,one=1,i;
    vector <int> flights;
    cout<<"\nEnter the no of flights and Fluel:";
    cin>>no>>fuel;
    cout<<"\nEnter the flight counts:";
    for(i=0;i<no;i++)
    {
        cin>>data;
        flights.push_back(data);
    }
    for(int i=0;i<flights.size();i++)
    {
        sum+=flights[i];
        if (sum <= fuel)
        {
            count++;
        }
    } 
    cout<<"\nCount:"<<count;
    return 0;
}
