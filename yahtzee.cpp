#include<iostream>
#include<vector>
using namespace std;
void greater(int,int);
int main()
{
    int last=0,add=0,mx=0,temp=0,n,a=0,com1=0,flag=0;
    vector <int> toss;
    int compare[10];
    cout<<"\nEnter the Number of Elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        toss.push_back(a);
    }



    for(int i=1;i<=7;i++)
    {
       for (int j=0;i<toss.size();j++)
       {
           

