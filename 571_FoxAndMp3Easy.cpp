#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<stdlib.h>
#include<ctype.h>
using namespace std;
int main()
{
    int lt;
    cout<<"\nEnter the Limit:";
    cin>>lt;
    string blah[2];
    vector <string> source;
    vector <string> o,t,th,f,fi,s,se,e,n;
    vector <string> O,T,TH,F,FI,S,SE,E,N,final;
    for (int i=1;i<=lt;i++)
    {
        string String = static_cast<ostringstream*>( &(ostringstream() << i) )->str();
        source.push_back(String);
    }
    for (int i=0;i<source.size();i++)
    {
        string temp = source[i];
        if (temp[0] == '1')
        {
            o.push_back(temp); 
        }
        else if (temp[0] == '2')
        {
            t.push_back(temp);
        }
        else if(temp[0] == '3')
        {
            th.push_back(temp);
        }
        else if(temp[0] == '4')
        {
            f.push_back(temp);
        }
        else if(temp[0] == '5')
        {
            fi.push_back(temp);
        }
        else if(temp[0] == '6')
        {
            s.push_back(temp);
        }
        else if(temp[0] == '7')
        {
            se.push_back(temp);
        }
        else if(temp[0] == '8')
        {
            e.push_back(temp);
        }
        else if(temp[0] == '9')
        {
            n.push_back(temp);
        }
    }
    //One
    for(int b=0;b<o.size();b++)
    {
        if (b == 0 or b == 1)
        {
            O.push_back(o[b]+".mp3");
        }
        if (b>=2 && o[b].size() == 3)
        {
            O.push_back(o[b]+".mp3");
        }
    }
    for(int b=0;b<o.size();b++)
    {
        std::string myString = o[b];
        int value = atoi(myString.c_str());
        if(myString.size() == 2)
        {
            if((value%10)>=1)
            {
                O.push_back(myString+".mp3");
            }
        }
    }
    //Two
    for(int b=0;b<t.size();b++)
    {
        if (b == 0 or b == 1)
        {
            T.push_back(t[b]+".mp3");
        }
        if (b>=2 && t[b].size() == 3)
        {
            T.push_back(t[b]+".mp3");
        }
    }
    for(int b=0;b<t.size();b++)
    {
        std::string myString = t[b];
        int value = atoi(myString.c_str());
        if(myString.size() == 2)
        {
            if((value%10)>=1)
            {
                T.push_back(myString+".mp3");
            }
        }
    }
    //Three
    for(int b=0;b<th.size();b++)
    {
        if (b == 0 or b == 1)
        {
            TH.push_back(th[b]+".mp3");
        }
        if (b>=2 && th[b].size() == 3)
        {
            TH.push_back(th[b]+".mp3");
        }
    }
    for(int b=0;b<th.size();b++)
    {
        std::string myString = th[b];
        int value = atoi(myString.c_str());
        if(myString.size() == 2)
        {
            if((value%10)>=1)
            {
                TH.push_back(myString+".mp3");
            }
        }
    }
    //Four
    for(int b=0;b<f.size();b++)
    {
        if (b == 0 or b == 1)
        {
            F.push_back(f[b]+".mp3");
        }
        if (b>=2 && f[b].size() == 3)
        {
            F.push_back(f[b]+".mp3");
        }
    }
    for(int a=0;a<f.size();a++)
    {
        std::string myString = f[a];
        int value = atoi(myString.c_str());
        if(myString.size() == 2)
        {
            if((value%10)>=1)
            {
                F.push_back(myString+".mp3");
            }
        }
    }
    //Five
    for(int b=0;b<fi.size();b++)
    {
        if (b == 0 or b == 1)
        {
            FI.push_back(fi[b]+".mp3");
        }
        if (b>=2 && fi[b].size() == 3)
        {
            FI.push_back(fi[b]+".mp3");
        }
    }
    for(int b=0;b<fi.size();b++)
    {
        std::string myString = fi[b];
        int value = atoi(myString.c_str());
        if(myString.size() == 2)
        {
            if((value%10)>=1)
            {
                FI.push_back(myString+".mp3");
            }
        }
    }
    //Six
    for(int b=0;b<s.size();b++)
    {
        if (b == 0 or b == 1)
        {
            S.push_back(s[b]+".mp3");
        }
        if (b>=2 && s[b].size() == 3)
        {
            S.push_back(s[b]+".mp3");
        }
    }
    for(int b=0;b<s.size();b++)
    {
        std::string myString = s[b];
        int value = atoi(myString.c_str());
        if(myString.size() == 2)
        {
            if((value%10)>=1)
            {
                S.push_back(myString+".mp3");
            }
        }
    }
    //Seven
    for(int b=0;b<se.size();b++)
    {
        if (b == 0 or b == 1)
        {
            SE.push_back(se[b]+".mp3");
        }
        if (b>=2 && se[b].size() == 3)
        {
            SE.push_back(se[b]+".mp3");
        }
    }
    for(int b=0;b<se.size();b++)
    {
        std::string myString = se[b];
        int value = atoi(myString.c_str());
        if(myString.size() == 2)
        {
            if((value%10)>=1)
            {
                SE.push_back(myString+".mp3");
            }
        }
    }
    //Eight
    for(int b=0;b<e.size();b++)
    {
        if (b == 0 or b == 1)
        {
            E.push_back(e[b]+".mp3");
        }
        if (b>=2 && e[b].size() == 3)
        {
            E.push_back(e[b]+".mp3");
        }
    }
    for(int b=0;b<e.size();b++)
    {
        std::string myString = e[b];
        int value = atoi(myString.c_str());
        if(myString.size() == 2)
        {
            if((value%10)>=1)
            {
                E.push_back(myString+".mp3");
            }
        }
    }
    //Nine
    for(int b=0;b<n.size();b++)
    {
        if (b == 0 or b == 1)
        {
            N.push_back(n[b]+".mp3");
        }
        if (b>=2 && n[b].size() == 3)
        {
            N.push_back(n[b]+".mp3");
        }
    }
    for(int b=0;b<n.size();b++)
    {
        std::string myString = n[b];
        int value = atoi(myString.c_str());
        if(myString.size() == 2)
        {
            if((value%10)>=1)
            {
                N.push_back(myString+".mp3");
            }
        }
    }
    //Final Merging
    for(int i=0;i<O.size();i++)
    {
        final.push_back(O[i]);
    }
    for(int i=0;i<T.size();i++)
    {
        final.push_back(T[i]);
    }
    for(int i=0;i<TH.size();i++)
    {
        final.push_back(TH[i]);
    }
    for(int i=0;i<F.size();i++)
    {
        final.push_back(F[i]);
    }
    for(int i=0;i<FI.size();i++)
    {
        final.push_back(FI[i]);
    }
    for(int i=0;i<S.size();i++)
    {
        final.push_back(S[i]);
    }
    for(int i=0;i<SE.size();i++)
    {
        final.push_back(SE[i]);
    }
    for(int i=0;i<E.size();i++)
    {
        final.push_back(E[i]);
    }
    for(int i=0;i<N.size();i++)
    {
        final.push_back(N[i]);
    }
    //Output
    for (int i=0;i<final.size();i++)
    {
        cout<<"\n"<<final[i];
    }
    return 0;
}
