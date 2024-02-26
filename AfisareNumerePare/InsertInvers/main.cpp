#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    while(cin>>s)
    {
        cout<<s<<' ';
        reverse reverse(s.begin(),s.end());
        cout<<s<<' ';
    }
    return 0;
}
