#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int count=0,colon=0;
    string input;
    vector <string> moment;
    cout<<"\nEnter 3 moments:";
    for (int i=0;i<4;i++)
    {
        cin>>input;
        moment.push_back(input);
    }
    /* Finding the : */
    for(int i=0;i<moment.size();i++)
    {
        string temp = moment[i];
        colon = temp.find(':');
            for (int k=0;k<colon;k++)
            {
                cout<<"\nTemp:"<<temp<<"\n";
                if (temp[k] == temp[(temp.size()-k)-1])
                {
                    cout<<"\nTEMP[k]:\t"<<temp[k]<<"\tTEMP[right]:\t"<<temp[(temp.size()-k)-1];
                    count++;
                }
            }
        }
    cout<<"\nMoment:"<<count/2<<"\n";
    return 0;
}
