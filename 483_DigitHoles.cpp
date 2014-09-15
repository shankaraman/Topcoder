#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int number,digit,one=0,two=0,final=0;
    cout<<"\nEnter the number:";
    cin>>number;
    while(number > 0)
    {
        digit = number%10;
        if (digit == 4 || digit == 6 || digit == 9|| digit == 0)
        {
            one++;
        }
        else if (digit == 8)
        {
            two+=2;
        }
        final = one+two;
        number/=10;
    }
    cout<<"\nThe Answer is:"<<final;
    return 0;
}
