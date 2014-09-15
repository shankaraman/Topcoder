#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int negative=0,positive=0,zero=0;
    vector <int> P;
    for (int i=0;i<5;i++)
    {
        int num;
        cout<<"\nEnter the num:";
        cin>>num;
        P.push_back(num);
    }
    for(int i=0;i<P.size();i++)
    {
        if (P[i] == 0)
        {
            zero++;
        }
        else if(P[i] < 0)
        {
            negative++;
        }
        else
        {
            positive++;
        }
    }
    if (zero)
    {
        cout<<"\nZero";
    }
    else if ((negative % 2 == 0))
    {
        cout<<"\nPostive";
    }
    else if(negative==1 ||negative%2!=0)
    {
        cout<<"\nNegative:";
    }
    else
    {
        cout<<"\nPosiitve:";
    }

    return 0;


