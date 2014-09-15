#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,no,r,s,count=0;
    cout<<"\nEnter n and m + size of array:";
    cin>>n>>m>>no;
    vector <int> row,seat;
    cout<<"\nFirst enter the row then seat index:";
    for(int i=0;i<no;i++)
    {
        cin>>r;
        row.push_back(r);
        cin>>s;
        seat.push_back(s);
    }
    int allotted[n+1][m+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            allotted[i][j] = 0;
        }
    }
    for(int i=0;i<row.size();i++)
    {
        allotted[row[i]][seat[i]] = 1;
    }
    for(int i=0;i<row.size();i++)
    {
        for(int j=0;j<seat.size();j++)
        {
            cout<<allotted[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<m;j++) /*j<seat.size() because to prevent j having a value more than the seat size, i.e if size is j=2 it shoud not exceed the limit. This is useful for the condition !allotted[i][j+1]*/
        {
            if (allotted[i][j] == 0 && allotted[i][j+1]== 0)
            {
                count++;
            }
        }
    }
    cout<<"\n"<<count;
    return 0;
}
