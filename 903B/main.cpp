#include <iostream>

using namespace std;

int v[256];

int main()
{
    int n,a,b,imp=0;
    string s;
    cin>>n;
    while(n)
    {
        cin>>a>>b>>s;
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]]%2==1)
                imp--;
            v[s[i]]++;
            if(v[s[i]]%2==1)
                imp++;
        }
        if(imp-b<=1)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}
