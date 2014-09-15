#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector <int> input;
    int lt,num,sum=0;
    cin>>lt;
    for(int i=0;i<lt;i++)
    {
        cin>>num;
        input.push_back(num);
    }
    for(int i=input.size()-1;i>0;--i)
    {
        input[i-1]+=(input[i]/2);
    }
    cout<<input[0];
}
