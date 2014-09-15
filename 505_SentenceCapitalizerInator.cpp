#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string a="",final;
    int cal,rep;
//    string dot = ".";
    char caps;
    vector<string> sentence;
    getline(cin,a);
    for(int i=0;i<a.size();i++)
    { 
        int len = a.size()-1;
        if(i == len && a[len]=='.')
        {
            break;
        }
        if (i == 0)
        {
           cal = ((int)a[i]-97);
            rep = 65+cal;
            caps = ((char)rep);
            final = caps;
            sentence.push_back(final);
        }
        else
        {
            string iam;
            iam = a[i];
            sentence.push_back(iam);        
        }
    }
    for(int i=0;i<sentence.size();i++)
    {
    if (sentence[i] == "." and sentence[i+1] == " ")
    {
        char ch = sentence[i+2][0];
        cal = ((int)ch)-97;
        rep = 65+cal;
        caps = ((char)rep);
        final = caps;
        sentence[i+2] = final;
    }
    }
    string last;
    for (int i=0;i<sentence.size();i++)
    {
        last+=sentence[i];
    }
    cout<<last+".";
    return 0;
}
