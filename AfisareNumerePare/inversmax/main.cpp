#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int lm=0,lc=0;
    bool l=false;
    string s;
    getline(cin,s);
    s+=' ';
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            lc++;
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                l=true;
        }
        else
        {
            if(lc>lm&&l)
                lm=lc;
            lc=0;
            l=false;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            lc++;
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                l=true;
        }
        else
        {
            if(lc==lm&&l)
                reverse(s.begin()+i-lc, s.begin()+i);
            lc=0;
            l=false;
        }
    }
    s.pop_back();
    cout<<s;
    return 0;
}
