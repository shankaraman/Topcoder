#include<iostream>
#include<vector>
#include<algorithm>
#define all(c) c.begin(),c.end()
using namespace std;
int main()
{
    int n,e;
    cin >> n;
    vector <int> elem;
    for (int i=0;i<n;i++)
    {
        cin>>e;
        elem.push_back(e);
    }
    sort(all(elem));
    cout<<"\nFactors:"<<elem.back();
    return 0;
}

