#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string paragraph;
    cout<<"\nEnter the Paragraph:";
    cin>>paragraph;
    paragraph[0] = toupper(p[0]);
    for(int i=0;i<paragraph.size();i++)
    {
        if (paragraph[i] == '.' && i+2 < p.size())
        {
            paragraph[i+2] = toupper(p[i+2]);
        }
    }
    cout<<paragraph;
}
