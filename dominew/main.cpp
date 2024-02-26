#include <iostream>
#include <algorithm>

using namespace std;

//ifstream cin("dominew.in");
//ofstream cout("dominew.out");

struct vd
{
    int nr;
    int po;
    int pm;
    int p;
};
bool cmp1(vd n,vd m)
{
    return n.nr<m.nr;
}
bool cmp2(vd n,vd m)
{
    return n.po<m.po;
}

int v[1000001];
vd w[8001];

int main()
{
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cin>>m;
    for(int j=1;j<=m;j++)
    {
        cin>>w[j].nr;
        w[j].po=j;
    }
    for(int i=1;i<=m;i++)
        for(int j=i+1;j<=m;j++)
            if(w[i].nr>w[j].nr)
                w[i].pm++;
    sort(w+1,w+m+1,cmp1);
    int i=1,j=1,p=1;
    while(i<=n&&j<=m)
    {
        if(j>1&&w[j].nr==w[j-1].nr)
            p--;
        if(v[i]<w[j].nr)
        {
            p++;
            i++;
        }
        if(v[i]>=w[j].nr)
        {
            p++;
            j++;
            w[j-1].p=p-1-w[j-1].pm;
        }
    }
    while(j<=m)
    {
        if(j>1&&w[j].nr==w[j-1].nr)
            p--;
        p++;
        j++;
        w[j-1].p=p-1-w[j-1].pm;
    }
    sort(w+1,w+m+1,cmp2);
    for(j=1;j<=m;j++)
        cout<<w[j].p<<' ';
    return 0;
}
