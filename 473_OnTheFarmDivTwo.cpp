#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int cow = (legs - 2 * heads)/2;
    int chick = heads-cow;
    if(cow < 0 || cow > heads || chick<0||chick>heads||2*chick+4*cow!=legs)
    {
        return vector<int> ();
    }
    else
    {
        vector <int> ans;
        ans.push_back(chick);
        ans.push_back(cow);
        return ans;
    }
}
