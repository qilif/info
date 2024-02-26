#include <iostream>

using namespace std;

//ifstream cin ("extraprime.in");
//ofstream cout ("extraprime.out");

bool v[10000000];

void chur()
{
    for(int i=2;i<10000000;i++)
        if(v[i]==0)
            for(int j=2;j*i<10000000;j++)
                v[i*j]=1;
    v[1]=1;
}
bool extraprim(int n)
{
    if(v[n]==1)
        return 0;
    else
    {

        int m=n*10,nrcif=0,x=10;
        while(m/=10)
            nrcif++;
        if(nrcif>1)
            for(int i=1;i<=nrcif;i++)
            {
                m=n;
                m/=x;
                m*=x/10;
                m+=n%(x/10);
                if(v[m]==1)
                    return 0;
                x*=10;
            }
        else
            if(v[n]==1)
                return 0;
        return 1;
    }
}

int main()
{
    chur();
    int n,m,i=0,maxi=1,mini;
    cin>>n>>m;
    while(n<=m)
    {
        if(extraprim(n)==1)
        {
            i++;
            if(i==1)
                mini=n;
            maxi=n;
        }
        n++;
    }
    if(maxi==1)
        cout<<1;
    else
        cout<<i<<'\n'<<mini<<'\n'<<maxi;
    return 0;
}
