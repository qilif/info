#include <fstream>

using namespace std;

ifstream cin("forta.in");
ofstream cout("forta.out");

int f[1000], pr[45000];
bool v[45000];

int forta(int n, int m)
{
    int div=1,i=0,e;
    while(i<m&&pr[i]*pr[i]<=n)
    {
        e=1;
        while(n%pr[i]==0)
        {
            n/=pr[i];
            e++;
        }
        div*=e;
        i++;
    }
    if(n>1)
        div=div*2;
    return div;
}
int main(){
    int c,n,i,j,x,maxi,nr,m,div;
    cin>>c>>n;
    v[0]=1;
    v[1]=1;
    for(i=2;i*i<45000;i++)
        if(v[i]==0)
            for(j=i*i;j<45000;j=j+i)
                v[j]=1;
    m=0;
    for(i=2;i<45000;i++)
        if(v[i]==0)
        {
            pr[m]=i;
            m++;
        }
    if(c==1)
    {
        maxi=0;
        nr=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            div=forta(x,m);
            if(div>maxi)
            {
                maxi=div;
                nr=x;
            }
            else if(div==maxi&&x<nr)
                nr=x;
        }
        cout<<nr;
    }
    else
    {
        maxi=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            div=forta(x,m);
            f[div]++;
            if(f[div]>maxi)
                maxi=f[div];
        }
        cout<<maxi;
    }
    return 0;
}
