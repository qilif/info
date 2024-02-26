#include<iostream>
#include<algorithm>
using namespace std;
unsigned long long int v[3000],v1[20000000];
int main()
{
    unsigned long long int n,c,y,m,im,j=0,d=-1,i,z,st,dr;
    cin>>c>>n;
    for(i=0; i<=n-1; i++)
        cin>>v[i];
    cin>>y;
    st=v[1];
    dr=v[n-1]
    i=n;
    if(c==1)
    {
        i=n-1;
        im=i;
        m=v[i];
        i--;
        while(i>0)
        {
            if(v[i]>m)
            {
                im=i;
                m=v[i];
            }
            i--;
        }
        cout<<m<<' '<<im;
    }
    else if(c==2)
    {
        sort(v,v+n-1);

    }
    else
    {
        i=0;
    }
    return 0;
}
