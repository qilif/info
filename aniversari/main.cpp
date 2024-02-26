#include <iostream>
using namespace std;
struct nastere
{
    int a,l,z;
};
int main()
{
    int n,ama=-1,lma=0,zma=0,ami=99999,lmi=13,zmi=32,mi,ma;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        nastere m;
        cin>>m.a>>m.l>>m.z;
        if(m.a>ama)
        {
            ama=m.a;
            lma=m.l;
            zma=m.z;
            mi=i;
        }
        else if(m.a==ama)
        {
            if(m.l>lma)
            {
                lma=m.l;
                zma=m.z;
                mi=i;
            }
            else if(m.l==lma)
            {
                if(m.z>zma)
                {
                    zma=m.z;
                    mi=i;
                }
            }
        }
        if(m.a<ami)
        {
            ami=m.a;
            lmi=m.l;
            zmi=m.z;
            ma=i;
        }
        else if(m.a==ami)
        {
            if(m.l<lmi)
            {
                lmi=m.l;
                zmi=m.z;
                ma=i;
            }
            else if(m.l==lmi)
            {
                if(m.z<zmi)
                {
                    zmi=m.z;
                    ma=i;
                }
            }
        }
    }
    cout<<mi<<' '<<ma;
    return 0;
}
