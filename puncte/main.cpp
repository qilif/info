#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n,x,y,i=1;
    long long p;
    float z,zmax=0;
    cin>>n;
    while(n)
    {
        cin>>x>>y;
        p=x*x+y*y;
        z=sqrt(p);
        if(z>zmax)
        {
            zmax=z;
            i=1;
        }
        else if(z==zmax)
            i++;
        n--;
    }
    //cout<<setprecision(4)<<zmax;
    cout<<zmax;
    cout<<' '<<i;
    return 0;
}
