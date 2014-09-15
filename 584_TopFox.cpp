#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
int main()
{
	string f = "",g="",con="",down = "";
	cout<<"\nEnter the family name and Given name:";
	cin>>f>>g;
	set <string> s;
	for (int i=0;i<f.size();i++)
	{
		con+=f[i];
		down = "";
		for(int j=0;j<g.size();j++)
		{
			down+=g[j];
			cout<<"\n"<<con+down;
			s.insert(con+down);
		}
	}
	cout<<"\nAns:"<<s.size()<<"\n";
	return 0;
}
