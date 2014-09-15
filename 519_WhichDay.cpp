#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;
int main()
{
    vector <string> week,normal;
    vector <int> s;
    string day;
    int temp;
    normal.push_back("Sunday");
    normal.push_back("Monday");
    normal.push_back("Tuesday");
    normal.push_back("Wednesday");
    normal.push_back("Thursday");
    normal.push_back("Friday");
    normal.push_back("Saturday");
    for (int i=0;i<6;i++)
    {
        cin>>day;
        week.push_back(day);
    }
    set<string> final;
    for(int i=0;i<normal.size();i++)
    {
        final.insert(normal[i]);
    }
    for (int i=0;i<week.size();i++)
    {
        final.erase(week[i]);
    }
    cout<<(*final.begin());
}
 
