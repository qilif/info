#include <iostream>
#include <algorithm>

using namespace std;

//ifstream cin("interclasare3.in");
//ofstream cout("interclasare3.out");

int v[100000],w[1000000],c[2000000];

int main()
{
    int n,m,e=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int j=0;j<m;j++)
        cin>>w[j];
    sort(w,w+m);
    int i=0,j=0,p=0;
    while(i<n&&j<m)
        if(v[i]<w[j])
            c[p++]=v[i++];
        else
            c[p++]=w[j++];
    while(i<n)
        c[p++]=v[i++];
    while(j<m)
        c[p++]=w[j++];
    for(int y=0;y<p;y++)
    {
        if(c[y]%2==0)
        {
        	cout<<c[y]<<' ';
        	if(e%20==19&&e!=0)
        		cout<<'\n';
            e++;
        }
    }
    return 0;
}
