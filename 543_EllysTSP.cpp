#include<iostream>
#include<vector>
#include<string>
using namespace std;
class EllysTSP
{
    public:
        int c,v;
        vector <char> lst1;
        vector <char> lst2;
        vector <char> lst3;
        int getMax(string places)
        {
            c=v=0;
            for(int i=0;i<places.size();i++)
            {
                if (places[i] == 'C')
                {
                    c+=1;
                }
                else
                {
                    v+=1;
                }
            }
            for(int i=0;i<places.size();i++)
            {
                if (places[i] == 'V')
                {
                    lst1.push_back(places[i]);
                }
                else
                {
                    lst2.push_back(places[i]);
                }
            }
            if (v>c)
            {
                for(int i=0;i<lst2.size();i++)
                {
                    lst3.push_back(lst1[i]);
                    lst3.push_back(lst2[i]);
                }
                lst3.push_back('V');
            }
            if (c>v)
            {
                for(int i=0;i<lst1.size();i++)
                {
                    lst3.push_back(lst2[i]);
                    lst3.push_back(lst1[i]);
                }
                lst3.push_back('C');
            }
            return lst3.size();
        }
    };
