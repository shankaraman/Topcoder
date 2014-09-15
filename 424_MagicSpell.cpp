#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string spell,final;
    vector <char> ENC,ORG;
    cout<<"\nEnter the Spell:";
    cin>>spell;
    for(int i=0;i<spell.size();i++)
    {
        if (spell[i] == 'Z' || spell[i] == 'A')
        {
            ENC.push_back(spell[i]);
        }
        else
        {
            ENC.push_back('-');
            ORG.push_back(spell[i]);
        }
    }
    reverse(ENC.begin(),ENC.end());
   for(int i=0;i<ORG.size();i++)
   {
        for(int j=0;j<ENC.size();j++)
        {
            if (ENC[i] == '-')
            {
                ENC[i] = ORG[i];
                break;
            }
        }
    }
   for(int i=0;i<ENC.size();i++)
   {
       final+=ENC[i];
   }
   cout<<"\nDECRYPTED:"<<final<<"\n";
   return 0;
}
