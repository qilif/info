#include <iostream>
using namespace std;
int v[100000];
int main()
{
    int n,m=1,k=1,p=0,i=1;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    i=1;
    while(v[i]>=k)
    {
        v[i]-=k;
        p+=k;
        k++;
        i++;
        if(i>n)
        {
            i=1;
            m++;
        }
    }
    i++;
    while(i)
    {
        p-=i*m;
        i--;
    }
    cout<<p-3;
    return 0;
}
