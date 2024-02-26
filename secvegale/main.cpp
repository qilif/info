#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,m=0,s=0,k=0,a=1,b=0,x=0,y=0;
    cin>>n;
    v[0]=1001;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        s++;
        if(v[i]!=v[i-1])
        {
            s=0;
            a=i;
            b=1;
        }
        else
            b=i;
        if(s>=m)
        {
            m=s;
            y=b;
            x=a;
        }
    }
    cout<<x<<' '<<y;
    return 0;
}
