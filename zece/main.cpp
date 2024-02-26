#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin ("zece.in");
ofstream cout ("zece.out");


int v[1001];

struct elev
{
    int p,nr;
};

bool cmp(elev a, elev b)
{
    if(a.p==b.p) return a.nr<b.nr;
    return a.p>b.p;
}

elev v1[1001];

int main()
{
    int c,n,k;
    cin >> c >> n >> k;
    if(c == 1)
    {
        for(int i = 1; i <= n; i++)
            cin >> v[i];
        sort (v + 1, v + n + 1, greater<int>());
        for(int i = 1; i <= k || v[i-1] == v[i]; i++)
            cout << v[i] << ' ';
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            cin >> v1[i].p;
            v1[i].nr = i;
        }
        sort (v1 + 1, v1 + n + 1, cmp);
        for(int i=1; i <= k || v1[i-1].p==v1[i].p; i++)
            cout<<v1[i].nr<<' ';
    }
    return 0;
}
