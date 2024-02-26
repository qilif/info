#include <iostream>
#include <algorithm>
using namespace std;
//ifstream cin ("sort_div.in");
//ofstream cout ("sort_div.out");
struct numar
{
    int nr, cc, nd, pc;
};

numar v[10001];

bool cmp(numar a, numar b)
{
    if(a.nd!=b.nd) return a.nd<b.nd;
    if(a.cc!=b.cc) return a.cc<b.cc;
    if(a.pc!=b.pc) return a.pc<b.pc;
    return a.nr<b.nr;
}

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;
        v[i].nr = nr;

        if (nr == 0) v[i].cc = 0;
        else
        {
            v[i].cc=nr%9;
            if (v[i].cc==0) v[i].cc=9;
        }

        v[i].nd=0;
        for(int j=2;j*j<=nr;j++)
            if(nr%j==0)
                v[i].nd++;

        while(nr>=10)
            nr/=10;
        v[i].pc=nr;
    }
    sort(v+1, v+n+1, cmp);
    for(int i=1;i<=n;i++)
        cout << v[i].nr << " ";

}

