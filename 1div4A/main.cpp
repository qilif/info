#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    while(n)
    {
        cin>>s;
        if(s[0]!='a'&&s[1]!='b'&&s[2]!='c')
            cout<<"NO"<<'\n';
        else if(s[3]==NULL)
            cout<<"YES"<<'\n';
        n--;
    }
    return 0;
}
