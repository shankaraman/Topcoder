#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    int dollars,cents,count=0;
    char zero='0';
    cout<<"\nEnter the dollars and cents:";
    cin>>dollars>>cents;
    vector <char> comma;
    string d,c,part1="",new1="";
    ostringstream convert;
    convert << dollars;
    d = convert.str();
    ostringstream obj;
    obj << cents;
    c = obj.str();
    for(int i=d.size()-1;i>=0;i--)
    {
       ++count;
       comma.push_back(d[i]);
       if (count %3 == 0 && count != d.size())
       {
           comma.push_back(',');
       }
    }
    comma.push_back('$');
    for(int i=comma.size()-1;i>=0;i--)
    {
        part1+=comma[i];
    }
    if (c.size() == 1)
    {
        if (cents == 0)
        {
            stringstream ss;
            string s;
            ss <<zero;
            ss >> s;
            new1 = s+s;
        }
        else if (cents>0 && cents < 10)
        {
            stringstream ss;
            string s;
            ss << zero;
            ss >> s;
            new1 = s+c;
        }
        cout<<part1+'.'+new1;
    }
    else
    {
        new1 = c;
        cout<<part1+'.'+new1;
    }
    return 0;
}
