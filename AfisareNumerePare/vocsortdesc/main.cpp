#include <iostream>
#include <algorithm>

using namespace std;

struct str
{
    int vocale=0, l;
    string s;
};
bool cmp (str a, str b)
{
    if(a.vocale!=b.vocale) return a.vocale>b.vocale;
    if(a.l!=b.l) return a.l>b.l;
    return a.s<b.s;
}

str v[256];

int main()
{
    int i=0;
    string s,voc="aeiouAEIOU";
    while(cin>>s)
    {
        if(s=="end")
            break;
        i++;
        v[i].s=s;
        v[i].l=s.size();
        for(int j=0;j<s.size();j++)
            if(voc.find(s[j])!=-1)
                v[i].vocale++;
    }
    sort (v+1,v+i+1,cmp);
    for(int j=1;j<=i;j++)
        cout<<v[j].s<<'\n';
    return 0;
}
