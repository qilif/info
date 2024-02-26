#include <iostream>
#include <algorithm>

using namespace std;

int a[200000],b[200000];

int main()
{
    int n,m,i=0,j=0;
    char x;
    cin>>n>>m>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<m;j++)
        cin>>b[j];
    sort(a,a+n);
    sort(b,b+m);
    if(x=='*')
    {
        while(i<n&&j<m)
            if(a[i]<b[j])
                i++;
            else if(a[i]>b[j])
                j++;
            else
            {
                cout<<a[i++]<<' ';
                j++;
            }
    }
    if(x=='+')
    {
            int i=0,j=0;
        while(i<n&&j<m)
            if(a[i]<b[j])
                cout<<a[i++]<<' ';
            else if(a[i]>b[j])
                cout<<b[j++]<<' ';
            else
            {
                cout<<a[i++]<<' ';
                j++;
            }
        while(i<n)
            cout<<a[i++]<<' ';
        while(j<m)
            cout<<b[j++]<<' ';
    }
    if(x=='-')
    {
        while(i<n&&j<m)
            if(a[i]<b[j])
                cout<<a[i++]<<' ';
            else if(a[i]>b[j])
                j++;
            else
            {
                i++;
                j++;
            }
    }

    if(x=='%')
    {
        while(i<n&&j<m)
            if(a[i]<b[j])
                cout<<a[i++]<<' ';
            else if(a[i]>b[j])
                cout<<b[j++]<<' ';
            else
            {
                i++;
                j++;
            }
        while(i<n)
            cout<<a[i++]<<' ';
        while(j<m)
            cout<<b[j++]<<' ';
    }
    return 0;
}
