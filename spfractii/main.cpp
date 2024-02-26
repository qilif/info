#include <iostream>

using namespace std;

int cmmmc(int a, int b)
{
    int n=a, m=b;
    while(n!=m)
    {
        if(n>m)
            m+=b;
        if(n<m)
            n+=a;
    }
    return n;
}
int cmmdc(int n, int m)
{
    while(m)
    {
        int r=n%m;
        n=m;
        m=r;
    }
    return n;
}

int main()
{
    int a,b,c,d,snr,snm,scmmdc,pnr,pnm,pcmmdc;
    cin>>a>>b>>c>>d;
    snr=((a*(cmmmc(b,d)/b))+(c*(cmmmc(b,d)/d)));
    snm=cmmmc(b,d);
    scmmdc=cmmdc(snr,snm);
    snr/=scmmdc;
    snm/=scmmdc;
    cout<<snr<<' '<<snm<<'\n';
    pnr=a*c;
    pnm=b*d;
    pcmmdc=cmmdc(pnr,pnm);
    pnr/=pcmmdc;
    pnm/=pcmmdc;
    cout<<pnr<<' '<<pnm;
    return 0;
}
