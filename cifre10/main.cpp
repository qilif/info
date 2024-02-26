#include <fstream>

using namespace std;

ifstream cin("cifre10.in");
ofstream cout("cifre10.out");

int v[10],va[10],vb[10],vr[10];

int main()
{
    int n,a,b,c,i=0,m=0,maxi=0;
    cin>>c>>n;
    if(c==1)
    {
        while(n--)
        {
            cin>>a>>b;
            while(a)
            {
                v[a%10]++;
                va[a%10]++;
                a/=10;
            }
            while(b)
            {
                v[b%10]++;
                vb[b%10]++;
                b/=10;
            }
            for(int y=1;y<=9;y++)
                if(v[y])
                    if(min(vb[y],va[y])>0)
                    {
                        i++;
                        break;
                    }
            for(int y=1;y<=9;y++)
            {
                v[y]=0;
                va[y]=0;
                vb[y]=0;
            }
        }
        cout<<i;
        return 0;
    }
    else
    {
        while(n--)
        {
            cin>>a>>b;
            m=0;
            while(a)
            {
                v[a%10]++;
                va[a%10]++;
                a/=10;
            }
            while(b)
            {
                v[b%10]++;
                vb[b%10]++;
                b/=10;
            }
            for(int y=0;y<=9;y++)
                if(v[y])
                    if(min(vb[y],va[y])>0)
                        vr[y]+=min(vb[y],va[y]);
            for(int y=9;y>=0;y--)
                while(vr[y]--)
                    m=m*10+y;
            if(m>maxi)
                maxi=m;
            for(int y=0;y<=9;y++)
            {
                v[y]=0;
                va[y]=0;
                vb[y]=0;
                vr[y]=0;
            }
            m=0;
        }
        cout<<maxi;
        return 0;
    }
}
