#include<iostream>
using namespace std;
int main()
{
		int i=0,pro=1,n=0,k=0;
		cout<<"\nEnter n and k:";
		cin >>n>>k;
		double result;
			if (k<0)
			{
				k = k*-1;
				while (i < k)
				{
					n = n + 1;
                    cout<<"\nn:\t"<<n;
					pro = pro*n;
                    cout<<"\npro:\t"<<pro;
					i+=1;
				}
			//	cout<<"\nWhen k is less than 1:"<<pro;
			}
			else
			{
				while(i<k)
				{
//                    cout<<"\nn:\t"<<n;
                    pro = pro*n;
                    n = n - 1;
                    cout<<"\npro:\t"<<pro;
                    i++;
				}
				cout<<"\nWhen k is more than 1:"<<pro;
			}
			return 0;
}

