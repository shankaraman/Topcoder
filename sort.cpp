#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector <int> a;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        a.push_back(n);
    }
    std::sort(a.begin(),a.end());
    for (std::vector<int>::iterator it=a.begin(); it!=a.end(); ++it)
            std::cout << ' ' << *it;
}
