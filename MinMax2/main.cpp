#include <bits/stdc++.h>
using namespace std;
int maxi(int n)
{
    int ma=0;
    while(n)
    {
        if(n%10>ma)
            ma=n%10;
        n/=10;
    }
    return ma;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int max1=maxi(a);
    int max2=maxi(b);
    int ma;
    if(max1>max2)
        ma=max1*10+max2;
    else
        ma=max2*10+max1;
    int v[4],v1[4];
    int p=0,p1=0;
    cout<<ma<<' ';
    while(a)
    {
        v[p]=a%10;
        p++;
        a/=10;
    }
    while(b)
    {
        v1[p1]=b%10;
        p1++;
        b/=10;
    }
    sort(v,v+p);
    sort(v1,v1+p1);
    int min1=v[0],min2=v1[0];
    if(v1[0]==0&&v[0]==0)
    {
        int mi=10;
        for(int i=0;i<p;++i)
        {
            if(v[i]<mi&&v[i]!=0)
                mi=v[i];
            if(v1[i]<mi&&v1[i]!=0)
                mi=v1[i];
        }
        int m=mi*10;
        cout<<m;
    }
    else
    {
        if(min1==0||min2==0)
        {
            if(min1>min2)
                cout<<min1*10;
            else
                cout<<min2*10;
        }
        else
        {
            if(min1<min2)
                cout<<min1*10+min2;
            else
                cout<<min2*10+min1;
        }
    }

}
