    #include <fstream>
    using namespace std;
    ifstream in ("cifmaxmin.in");
    ofstream out ("cifmaxmin.out");
    int main()
    {
        long long n,p=0,i=0,m,cmax=0,cmin=10,nmax=0,nmin=100;
        in>>n;
        while(n)
        {
            in>>m;
            if(m%2==0)
            {
                p++;
                while(m)
                {
                    if((m%10)>cmax)
                        cmax=m%10;
                    if((m%10)<cmin)
                        cmin=m%10;
                    m/=10;
                }
                if(nmax<(cmax*10+cmin))
                    nmax=cmax*10+cmin;
            }
            cmax=0;
            cmin=10;
            if(m%2==1)
            {
                i++;
                while(m)
                {
                    if((m%10)>cmax)
                        cmax=m%10;
                    if((m%10)<cmin)
                        cmin=m%10;
                    m/=10;
                }
                if(nmin>(cmin*10+cmax))
                    nmin=cmin*10+cmax;
            }
            cmax=0;
            cmin=10;
            n--;
        }
        out<<nmax<<' '<<p<<' '<<nmin<<' '<<i;
        return 0;
    }
