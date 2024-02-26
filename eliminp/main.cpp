#include <iostream>

using namespace std;

int main()
{
    int p,pp;
    string s,ss;
    cin>>p;
    getline(cin,s);
    getline(cin,s);
    ss=s;
    pp=p;
    for(int i=0;p+i<=s.size();i++)
    {
        while(p)
        {
            s.erase(s.begin()+i);
            p--;
        }
        cout<<s<<'\n';
        p=pp;
        s=ss;
    }
    return 0;
}
