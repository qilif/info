#include <iostream>

using namespace std;

//ifstream cin("ruleta.in");
//ofstream cout("ruleta.out");

int v[10001],v1[10001];

int main()
{
    int n,r=2,t=0;
    bool b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        v1[i]=v[i];
    }
    while(true)
    {
        b=true;
        for(int i=1;i<=n+1;i++)
        {
            v1[i%n]=v[i%n];

            if(v[i%n] == 0 && v[(i+1)%n] != 0 && v[(i+2)%n] >= v[(i+1)%n])
                v[(i+2)%n] %= v[(i+1)%n];

            if(v[(i-1)%n] <= v[i%n])
                v[i%n] -= v[(i-1)%n];

            if(v[i%n] != v1[i%n])
                b = false;
        }
        if(b)
            break;
        r++;
    }
    for(int i=0; i < n; i++)
        if(v[i] != 0)
            t++;
    cout<<r<<' '<<t;
    return 0;
}
