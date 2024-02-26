#include <fstream>

using namespace std;

ifstream cin("carte.in");
ofstream cout("carte.out");

int v[10001];

int main()
{
    int n,m,z,p,pc,zc,pm=0,zm=0;
    cin>>n;
    z=0;
    p=1;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    while(p<=n)
    {
        z++;
        pc=0;
        for(int i=1;i<=n;i++)
        {
            if(v[i]==p)
            {
                p++;
                pc++;
            }
            if(pc>pm)
            {
                pm=pc;
                zm=z;
            }
        }
    }
    cout<<z<<' '<<zm<<' '<<pm;
    return 0;
}
