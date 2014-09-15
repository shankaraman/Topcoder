#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int total=0,data,count=0,no;
	vector <int> d;
	cout<<"\nEnter the no of days:";
	cin>>no;
	cout<<"\nEnter the total:";
	cin>>total;
	for(int i=0;i<no;i++)
	{
		cin>>data;
		d.push_back(data);
	}
	sort(d.begin(),d.end());
	if (total < d[0])
	{
		cout<<"Ans:0";
	}
	int iter = d.size();
	while (iter > 0)
	{
		total-=d[count];
		if (total >= 0)
		{
			count++;
		}
		iter--;
	}		
	cout<<"\nAns:"<<count;
	return 0;
}
