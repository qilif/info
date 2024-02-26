#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin ("sortare_divizori.in");
ofstream cout ("sortare_divizori.out");


struct numar
{
    int nr,nd;
};
int cdiv(int n)
{
    int ans=0,i;
    for(i=1;i*i<n;i++)
        if(n%i==0)
            ans+=2;
    if(i*i==n)
        ans++;
    return ans;
}
bool cmp(numar a, numar b)
{
    return a.nd>b.nd;
}

numar v[1001];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i].nr;
        v[i].nd=cdiv(v[i].nr);
    }
    sort(v+1,v+n+1,cmp);
    for(int i=1;i<=n;i++)
        cout<<v[i].nr<<' ';
    return 0;
}
