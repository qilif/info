#include <fstream>
using namespace std;
ifstream cin("colier.in");
ofstream cout("colier.out");
int m(int x)
{
    int max=0, pmax=0, min=10, pmin=0, cnt=0, first, b;
    while(x)
    {
        cnt++;
        if(min>x%10)
        {
            min=x%10;
            pmin=cnt;
        }
        if(max<x%10)
        {
            max=x%10;
            pmax=cnt;
        }
        x/=10;
    }
    if(pmin>pmax)
        return 1;
    else
    return 2;
}
int main()
{
    int n,x,cnt=0,c,b,first,last;
    cin>>c>>n;
    if(c==1)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if(m(x)==1)
                cnt++;
        }
        cout<<cnt;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if(m(x)!=b)
                cnt++;
            b=m(x);
            if(i==1)
                first=m(x);
            else if(n==i)
                last=m(x);
        }
        if(first==last)
            cnt--;
        cout<<cnt;
    }
}
