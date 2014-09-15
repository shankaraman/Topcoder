#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <long long> numbers,maximum;
    int no,data,temp,x;
    long long prod = 1;
    cout<<"\nEnter the no of data:";
    cin>>no;
    for(int i=0;i<no;i++)
    {
        cin>>data;
        numbers.push_back(data);
    }
    for(int i=0;i<no;i++)
    {
        prod = 1;
        temp = numbers[i]+1;
        for(int j=0;j<no;j++)
        {
            if (numbers[i] == numbers[j])
            {
                continue;
            }
            cout<<"\ni:"<<i<<"\tj:"<<j;
            prod*=numbers[j];
        }
        maximum.push_back(temp*prod);
    }
    sort(maximum.begin(),maximum.end());
    cout<<"\nEncrypted:"<<maximum[no-1];
    return 0;
}
