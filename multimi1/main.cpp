#include <iostream>
using namespace std;

long long v1[100000],v2[100000],w[100000];

int main()
{
    long long n,m,p1=0,p2=0,p3=0;
    cin>>n;
    for (long long i=0;i<n;i++)
        cin>>v1[i];
    cin>>m;
    for (long long i=0;i<m;i++)
        cin>>v2[i];
    while(p1<n&&p2<m)
    {
        if(v1[p1]<v2[p2])
        {
            cout<<v1[p1]<<' ';
            p1++;
        }
        else if(v2[p2]<v1[p1])
        {
            cout<<v2[p2]<<' ';
            p2++;
        }
        else
        {
            cout<<v1[p1]<<' ';
            w[p3]=v1[p1];
            p1++;
            p2++;
            p3++;
        }
    }
    while(p1<n)
    {
        cout<<v1[p1]<<' ';
        p1++;
    }
    while(p2<m)
    {
        cout<<v2[p2]<<' ';
        p2++;
    }
    cout<<'\n';
    for(long long i=0;i<p3;i++)
        cout<<w[i]<<' ';
    return 0;
}
