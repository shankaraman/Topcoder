#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <string,int> guess;
    guess["YYYY"]=1;
    guess["YYYN"]=2;
    guess["YYNY"]=3;
    guess["YYNN"]=4;
    guess["YNYY"]=5;
    guess["YNYN"]=6;
    guess["YNNY"]=7;
    guess["YNNN"]=8;
    guess["NYYY"]=9;
    guess["NYYN"]=10;
    guess["NYNY"]=11;
    guess["NYNN"]=12;
    guess["NNYY"]=13;
    guess["NNYN"]=14;
    guess["NNNY"]=15;
    guess["NNNN"]=16;
    string s;
    cout<<"\nEnter the String:";
    cin>>s;
    for( map<string, int>::iterator ii=guess.begin(); ii!=guess.end(); ++ii)
    {
        if (s == (*ii).first)
        {
            cout<<(*ii).first<<":"<<(*ii).second;
        }
    }
    return 0;
}
