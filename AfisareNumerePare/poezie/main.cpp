#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    getline(cin,s);
    while(n--)
    {
        getline(cin,s);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='.'&&s[i]!=','&&s[i]!='?'&&s[i]!='!')
                cout<<s[i];
            else if(i+1==s.length())
                cout<<s[i];
        }
        cout<<'\n';
    }
    return 0;
}
