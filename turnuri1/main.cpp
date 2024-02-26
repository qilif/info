#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("turnuri1.in");
ofstream cout("turnuri1.out");

struct cub
{
    int lat;
    char c;
};

cub v[50000];

bool cmp(cub a,cub b)
{
    return a.lat>b.lat;
}

int main()
{
    int c,n;
    cin>>c>>n;
    if(c==1)
    {
        long long ans1=1,ans2=0,turn=0;
        cin>>v[0].lat>>v[0].c;
        turn=v[0].lat;
        for(int i=1; i<n; i++)
        {
            cin>>v[i].lat>>v[i].c;
            if(v[i].lat>=v[i-1].lat||v[i].c==v[i-1].c)
            {
                ans1++;
                if(turn>ans2)
                    ans2=turn;
                turn=0;
            }
            turn+=v[i].lat;
        }
        if(turn>ans2)
            ans2=turn;
        cout<<ans1<<" "<<ans2;
    }
    else
    {
        int ans=1,last=0;
        for(int i=0;i<n;i++)
            cin>>v[i].lat>>v[i].c;
        sort(v,v+n,cmp);
        for(int i=1;i<n;i++)
        {
            if(v[i].lat<v[last].lat&&v[i].c!=v[last].c)
            {
                ans++;
                last=i;
            }
        }
        cout<<ans;
    }
    return 0;
}
