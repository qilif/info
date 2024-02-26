#include <iostream>
#include <algorithm>

using namespace std;

//ifstream cin ("qclasa.in");
//ofstream cout ("qclasa.out");


struct elev
{
    int nr,medie,absente;
};

elev m[41];

bool cmp(elev a, elev b)
{
    if (a.absente < b.absente) return false;
    if (a.absente > b.absente) return true;
    return a.nr < b.nr;
}

int main()
{
    int n,cnt=0,mc=0;
    elev u,p;
    u.absente=-1;
    p.absente=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m[i].nr>>m[i].medie>>m[i].absente;

        if(m[i].medie==10)
            cnt++;
        mc+=m[i].medie;
    }

    sort(m+1, m+n+1, cmp);

    cout<<cnt<<'\n';
    cout<<mc/n<<'\n';
    cout<<m[1].nr<<' '<<m[1].medie<<' '<<m[1].absente<<'\n';
    cout<<m[2].nr<<' '<<m[2].medie<<' '<<m[2].absente;

    return 0;
}

/*
int main()
{
    int n,cnt=0,mc=0;
    elev u,p;
    u.absente=-1;
    p.absente=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m[i].nr>>m[i].medie>>m[i].absente;

        if(m[i].medie==10)
            cnt++;
        mc+=m[i].medie;
        if(m[i].absente>u.absente)
        {
            p=u;
            u=m[i];
        }
        else if(m[i].absente==u.absente)
        {
            if(m[i].nr<u.nr)
            {
                p=u;
                u=m[i];
            }
            else if(m[i].absente>p.absente)
                p=m[i];
            else if(m[i].nr<p.nr&&m[i].absente==p.absente)
                p=m[i];
        }
        else if(m[i].absente>p.absente)
            p=m[i];
        else if(m[i].nr<p.nr&&m[i].absente==p.absente)
            p=m[i];
    }
    cout<<cnt<<'\n';
    cout<<mc/n<<'\n';
    cout<<u.nr<<' '<<u.medie<<' '<<u.absente<<'\n';
    cout<<p.nr<<' '<<p.medie<<' '<<p.absente;
    return 0;
}
*/
