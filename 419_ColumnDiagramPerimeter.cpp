#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> height;
    int lt,w,h,sum=0,p;
    cout<<"Enter the lt;";
    cin>>lt;
    for (int i=0;i<lt;i++)
    {
        cin>>w;
        height.push_back(w);
    }
    if (height.size() == 1)
	    {
	    	p = height[0]*2;
	    	return (p+2);
	    }
    h = height.size()*2;
    for (int i=0;i<=height.size()-2;i++)
    {
        sum+=abs(height[i]-height[i+1]);
    }
    int one = height.size()-1;
    cout<<sum+height[0]+height[height.size()-1]+h;
    return 0;
}
