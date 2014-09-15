#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string word,FAUX="";
    int palindrome=0,faux=0;
    vector <char> P;
    cout<<"\nEnter the Word:";
    cin>>word;
/* Palindrome */
    for(int i=0;i<word.size()/2;i++)
    {
        if (word[i] == word[(word.size()-i)-1])
        {
            palindrome++;
     //       cout<<"\nWord[i]:"<<word[i]<<"\t"<<"Word[right]"<<word[(word.size()-i)-1];
        }
    }
/* Faux Part 1 */
    for(int i=0;i<word.size();i++)
    {
        if (i == word.size())
        {
            if (word[i] != word[i-1])
            {
                P.push_back(word[i]);
            }
            break;
        }
        if (word[i] != word[i+1])
        {
            P.push_back(word[i]);
        }

    }
/* Converting Vector to String */
    for (int i=0;i<P.size();i++)
    {
        FAUX+=P[i];
    }
/*Faux Part II */
    for (int i=0;i<FAUX.size()/2;i++)
    {
        if (FAUX[i] == FAUX[(FAUX.size()-i)-1])
        {
            faux++;
        }
    }
/* Finish */
    if (palindrome == word.size()/2)
    {
        cout<<"PALINDROME";
    }
    else if (faux == FAUX.size()/2)
    {
        cout<<"FAUX";
    }
    else
    {
        cout<<"NOT EVEN FAUX";
    }

    return 0;
}
