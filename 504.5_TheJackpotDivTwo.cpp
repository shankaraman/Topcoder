#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int data,no,jackpot;
    vector <int> money;
    cout<<"\nEnter the number of data:";
    cin>>no;
    cout<<"\nEnter the jackpot:";
    cin>>jackpot;
    cout<<"\nEnter the Friends money:";
    for(int i=0;i<no;i++)
    {
        cin>>data;
        money.push_back(data);
    }
    if (jackpot > 0)
    {
       while (jackpot > 0)
       {
           sort(money.begin(),money.end());
           money[0]++;
           jackpot--;
       }
    }
    else
    {
        cout<<"\nZero";
    }
    cout<<"\nDown:";
    sort(money.begin(),money.end());
    for(int i=0;i<no;i++)
    {
        cout<<"\n"<<money[i];
    }
    return 0;
}
