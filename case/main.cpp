#include <fstream>

using namespace std;

ifstream cin ("case.in");
ofstream cout ("case.out");

int main()
{
    int n,m,c=0,f=0,b=0,r1=0,r2=0,r3=0;
    cin>>n;
    while(n)
    {
        cin>>m;
        c+=m%10;
        m/=10;
        f+=m%10;
        m/=10;
        b+=m%10;
        m/=10;
        if(m==1)
            r1++;
        else if(m==2)
            r2++;
        else
            r3++;
        n--;
    }
    cout<<r1<<'\n';
    cout<<r2<<'\n';
    cout<<r3<<'\n';
    cout<<b<<'\n';
    cout<<f<<'\n';
    cout<<c;
    return 0;
}
