#include <iostream>

using namespace std;

bool isValid(string s)
{
    int v[256];
    for(int i=0;i<=256;i++)
    {
        v[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
        v[s[i]]++;
        if(v[s[i]]>1) return false;
    }
    return true;
}

int main()
{
    int maxi=0;
    string s,ss;
    while(cin>>ss)
    {
        if(isValid(ss)&&ss.size()>maxi)
        {
            maxi=ss.size();
            s=ss;
        }
    }
    if(maxi==0)
    {
        cout<<"-1";
        return 0;
    }
    cout<<s;
    return 0;
}
