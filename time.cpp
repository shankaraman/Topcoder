#include<iostream>
using namespace std;
int main()
{
    int hrs,secs,min,min_left,sec_left;
    cout<<"\nEnter the Seconds:";
    cin>>secs;
    hrs = secs / 3600;
    min = secs / 60;
    min_left = min % 60;
    sec_left = secs % 60;
    cout<<"\n"<<hrs<<":"<<min_left<<":"<<sec_left<<"\n";
    return 0;
}
