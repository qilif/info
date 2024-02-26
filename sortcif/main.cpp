#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin ("sortcif.in");
ofstream cout ("sortcif.out");


int sumcif (int a)
{
    int s=0;
    while(a)
    {
        s+=a%10;
        a/=10;
    }
    return s;
}
struct nr
{
    int nr,suma;
};
bool cmp(nr a, nr b)
{
    return a.suma<b.suma;
}

nr v[101];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i].nr;
        v[i].suma=sumcif(v[i].nr);
    }
    sort(v+1, v+n+1, cmp);
    for(int i=1;i<=n;i++)
        cout<<v[i].nr<<' ';
    return 0;
}
