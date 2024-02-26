#include <fstream>

using namespace std;

ifstream cin ("accesibil.in");
ofstream cout ("accesibil.out");

int main()
{
    long long n,m,c,k,m1=0,m2=0,m3=0,mm,ucm,ok=0,ucm1,ucm2,i=0,nrkmcin=0,nrkmax=0,j=9,nrkmaxi=0,imp=0,pa=0;
    cin>>c>>k>>n;
    if(c==1)
    {
        while(n)
        {
            cin>>m;
            mm=m;
            ucm=m%10;
            m/=10;
            while(m)
            {
                if(ucm-m%10!=1)
                    break;
                ucm=m%10;
                m/=10;
            }
            if(m==0&&mm>9)
            {
                m=mm;
                if(m>=m1)
                {
                    m3=m2;
                    m2=m1;
                    m1=m;
                }
                else if(m>=m2)
                {
                    m3=m2;
                    m2=m;
                }
                else if(m>=m3)
                    m3=m;
            }
            n--;
        }
        cout<<m3<<' '<<m2<<' '<<m1;
        return 0;
    }
    else if(c==2)
    {
        while(n)
        {
            cin>>m;
            mm=m;
            ucm=m%10;
            m/=10;
            ucm1=m%10;
            ucm2=(m/10)%10;
            while(m)
            {
                if(ucm-ucm1!=1)
                {
                    if(ucm-ucm2==1)
                        m/=10;
                    ok++;
                }
                ucm=m%10;
                m/=10;
                ucm1=m%10;
                ucm2=(m/10)%10;
            }
            if(ok==1)
                i++;
            ok=0;
            n--;
        }
        cout<<i;
    }
    else if(c==3)
    {
        while(n--)
            cin>>m;
        i=1;
        while(k)
        {
            nrkmcin=nrkmcin*10+i;
            i++;
            nrkmax=nrkmax*10+j;
            j--;
            k--;
        }
        while(nrkmax)
        {
            nrkmaxi=nrkmaxi*10+nrkmax%10;
            nrkmax/=10;
        }
        cout<<nrkmcin<<' '<<nrkmaxi;
    }
    else
    {
        while(n--)
            cin>>m;
        while(k<10)
        {
            if(k%2==0)
                pa++;
            else
                imp++;
            k++;
        }
        cout<<pa<<' '<<imp;
    }
    return 0;
}
