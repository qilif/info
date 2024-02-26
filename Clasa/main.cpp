#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct medie
{
    double medie1, medie2, medie3;
    char nume[101], prenume[101];
};

struct medi
{
    double me;
    char num[101], prenum[101];
};

bool cmp (medi c, medi b)
{
    if (c.me != b.me) return c.me > b.me;

    double a = strcmp(c.num, b.num);
    if (a != 0) return a < 0;
    a = strcmp(c.prenum, b.prenum);
    if (a != 0) return a < 0;

    return true;
}

int main()
{
    int n,c, i=0;
    double mc=0, mn=0;
    medie m[101];
    medi mm[101];
    cin>>n>>c;
    if(c==1)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>m[j].nume>>m[j].prenume>>m[j].medie1>>m[j].medie2>>m[j].medie3;
            mc+=m[j].medie1+m[j].medie2+m[j].medie3;
        }
        mc/=(n*3);
        for(int j=1;j<=n;j++)
        {
            mn=(m[j].medie1+m[j].medie2+m[j].medie3)/3;
            if(mn>=mc)
                i++;
        }
        cout<<i;
    }
    else
    {
        for(int j=1;j<=n;j++)
        {
            cin>>m[j].nume>>m[j].prenume>>m[j].medie1>>m[j].medie2>>m[j].medie3;
            mc+=m[j].medie1+m[j].medie2+m[j].medie3;
        }
        mc/=(n*3);
        cout<<mc<<'\n';

        for(int j=1;j<=n;j++)
        {
            mm[j].me=(m[j].medie1+m[j].medie2+m[j].medie3)/3;
            strcpy (mm[j].num, m[j].nume);
            strcpy (mm[j].prenum, m[j].prenume);
        }
        sort (mm+1, mm+n+1, cmp);
        for(int j=1;j<=n;j++)
            cout<<mm[j].num<<' '<<mm[j].prenum<<' '<<mm[j].me<<'\n';
    }
    return 0;
}
