#include <iostream>

using namespace std;

int main()
{
    int n,m=0,s=0,k=0,a=0,b=0,x=0,y=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        s++;
        if(k)
        {
            s=0;
            a=i+1;
            b=1;
        }
        else
            b=i;
        if(s>m)
        {
            m=s;
            y=b;
            x=a;
        }
    }
    cout<<x<<' '<<y;
    return 0;
}
