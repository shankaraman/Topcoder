#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cout<<"\nEnter the String:";
    cin>>s;
    vector <char> vowels;
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');
    int j=0,i=0,count=0,deep=0,e2=0,g2=0;
    if (s.size() == 8)
    {
        while (i < vowels.size())
        {
            j = 0;count = 0;
            while (j < s.size())
            {
                if (vowels[i] == s[j])
                {
                    count+=1;
                    deep++;
                }
                j++;
            }
                    if (count > 2)
                    {
                        g2++;
                    }
                    else if(count == 2)
                    {
                        e2++;
                    }
            i++;
        }
    }
    else
    {
        cout<<"\nNo Enough Vowels:";
//        exit(0);
    }
    if (e2 and deep==2)
    {
        cout<<"+1";
    }
    else
    {
        cout<<"-1";
    }
}
