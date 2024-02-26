#include <iostream>

using namespace std;
struct timp
{
    int h,m,s;
};
int main()
{
    timp a,b;
    cin>>a.h>>a.m>>a.s>>b.h>>b.m>>b.s;
    int ta=a.h*3600+a.m*60+a.s,tb=b.h*3600+b.m*60+b.s,ss=a.s+b.s,mm=a.m+b.m,hh=a.h+b.h;
    cout<<a.h<<": "<<a.m<<": "<<a.s<<'\n'<<b.h<<": "<<b.m<<": "<<b.s<<'\n'<<ta<<'\n'<<tb<<'\n';
    if(ss>=60)
    {
        ss-=60;
        mm++;
    }
    if(mm>=60)
    {
        mm-=60;
        hh++;
    }
    cout<<hh<<": "<<mm<<": "<<ss;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int ha,hb,ma,mb,sa,sb;
    cin>>ha>>ma>>sa>>hb>>mb>>sb;
    int ta=ha*3600+ma*60+sa,tb=hb*3600+mb*60+sb,ss=sa+sb,mm=ma+mb,hh=ha+hb;
    cout<<ha<<": "<<ma<<": "<<sa<<'\n'<<hb<<": "<<mb<<": "<sb<<'\n'<<ta<<'\n'<<tb<<'\n';
    if(ss>=60)
    {
        ss-=60;
        mm++;
    }
    if(mm>=60)
    {
        mm-=60;
        hh++;
    }
    cout<<hh<<": "<<mm<<": "<<ss;
    return 0;
}
