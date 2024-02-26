#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("cowqueue.in");
ofstream cout("cowqueue.out");

struct u
{
    int c, t;
};
bool cmd(u a, u b)
{
    return a.c<b.c;
}

u w[101];

int main()
{
    int n, x=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>w[i].c>>w[i].t;
    sort(w,w+n,cmd);
    for(int i=0;i<n;i++)
    {
        if(x<w[i].c)
            swap(x,w[i].c);
        x+=w[i].t;
    }
    cout<<x;
}
