#include<iostream>
#include<set>
using namespace std;
int main()
{
    int v[] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
    int a=0;
    set<int> s;
    int size=0;
    size =sizeof v/sizeof(int);
    for (int i=0;i<size;i++)
    {
        a = v[i];
        s.insert(a);
    }
    for(set<int>::iterator i = s.begin();i != s.end();i++)
    {
        int w = *i;
        cout<<w;
    }
    return 0;
}
