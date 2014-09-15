#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int number=0,one=1,mod,div,part=1;
    vector <int> carry,carry1;
    cout<<"\nEnter the Number:";
    cin>>number;
    while (number > 0)
    {
        div = number/10;
        part = 1;
        while (div > 0)
        {
            part = part * (div%10);
            div/=10;
        }
        carry1.push_back(part);
        one*=(number%10);
        carry.push_back(one);
        number/=10;
    }
    cout<<"\nModulus:\n";
    one = 0;
    for (int i=0;i<carry.size();i++)
    {
        if (carry[i] == carry1[i])
        {
            one++;
        }
    }
    if (one)
    {
        cout<<"\nYES\n";
    }
    else
    {
        cout<<"\nNO\n";
    }
    return 0;
}
