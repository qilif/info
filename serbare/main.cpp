#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin ("serbare.in");
ofstream cout ("serbare.out");


struct grup
{
    int tip,nr;
};

bool cmp (grup a, grup b)
{
    return a.nr>b.nr;
}

grup v[12];

int main()
{
    int n,gr;
    cin>>n>>gr;
    for(int i=1;i<=n;i++)
    {
        grup m;
        cin>>m.nr>>m.tip;
        v[m.tip].nr+=m.nr;
        v[m.tip].tip=m.tip;
    }
    sort(v+1,v+gr+1,cmp);
    for(int i=1;i<=gr;i++)
        cout<<v[i].tip<<' ';
    return 0;
}
