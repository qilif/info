#include <iostream>

using namespace std;

int main()
{
    int n;
    string s,s1;
    cin>>n;
    while(n)
    {
        cin>>s;
        if(s.size()%2==1)
        {
            cout<<"NO"<<'\n';
            n--;
            continue;
        }
        s1=s.substr(0,s.size()/2);
        s=s.substr(s.size()/2);
        if(s1==s)
        {
            cout<<"YES"<<'\n';
            n--;
            continue;
        }
        cout<<"NO"<<'\n';
        n--;
    }
    return 0;
}
