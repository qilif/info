#include <fstream>

using namespace std;

ifstream cin("cifre.in");
ofstream cout("cifre.out");

int a[10];

int main()
{
    unsigned long long n,m,c,rm,maxi=0,cnt=1,p=1;
    bool ng=1;
    cin>>c>>n;
    if(c==1)
    {
        while(n--)
        {
            cin>>x;
            long long cp=x, p=1, r=0;
            bool ng=1;
            while(cp)
            {
                if(cp%10==0 && ng==1)
                {
                    p*=100;
                }
                else
                    ng=0;
                r=r*10+cp%10;
                cp/=10;
            }
            cp=r;
            r=0;
            while(cp)
            {
                r=r*10+cp%10;
                if((cp%10)%2==0)
                {
                    r=r*10+(cp%10)/2;
                }
                cp/=10;
            }
            r*=p;
            cout<<r;
        }
    }
    if(c==2)
    {
        long long ct=1, mx=-1;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            long long cp=x, p=1, r=0;
            bool ng=1;
            while(cp)
            {
                if(cp%10==0 && ng==1)
                {
                    p*=100;
                }
                else
                    ng=0;
                r=r*10+cp%10;
                cp/=10;
            }
            cp=r;
            r=0;
            while(cp)
            {
                r=r*10+cp%10;
                if((cp%10)%2==0)
                {
                    r=r*10+(cp%10)/2;
                }
                cp/=10;
            }
            r*=p;
            while(r)
            {
                a[r%10]++;
                r/=10;
            }
            long long nr=0;
            for(int i=0; i<=9; i++)
            {
                if(a[i]!=0)
                {
                    nr=nr*10+a[i];
                }
            }
            if(nr==mx)
            {
                ct++;
            }
            if(nr>mx)
            {
                mx=nr;
                ct=1;
            }
            for(int i=0; i<=9; i++)
            {
                a[i]=0;
            }
        }
        cout<<mx<<" "<<ct;
    }
    return 0;
}
