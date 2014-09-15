#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter the Three Sides:";
    cin>>a>>b>>c;
    vector <int> triangle;
    triangle.push_back(a);
    triangle.push_back(b);
    triangle.push_back(c);
    sort(triangle.begin(),triangle.end());
    a = triangle[0];b=triangle[1];c=triangle[2];
    if ((a+b)<=c)
    {
        cout<<"\nIMPOSSIBLE";
    }
    else if ((a*a)+(b*b) == (c*c))
    {
        cout<<"\nRIGHT";
    }
    else if((a*a)+(b*b) < (c*c))
    {
        cout<<"\nObtuse";
    }
    else if((a*a)+(b*b) > (c*c))
    {
        cout<<"\nAcute";
    }
    return 0;
}
