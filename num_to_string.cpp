#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    int Number = 123;
    string String = static_cast<ostringstream*>( &(ostringstream() << Number) )->str();
    cout<<"\n"<<String;
    return 0;
}
