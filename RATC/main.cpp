#include <iostream>
using namespace std;
int main()
{
    int n,c,m,a,b,s=0,s1=0,x,y,z;
    cin>>n>>x>>y>>c;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        s+=a;
        s1+=b;
        if(i+1==x)
            z=s;
    }
    if(c==1)
    {
        cout<<s<<' '<<s1<<' '<<s-s1;
        return 0;
    }
    else if(z<y)
        cout<<"NU";
    else
        cout<<"DA";
    return 0;
}
