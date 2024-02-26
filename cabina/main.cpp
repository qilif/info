#include <fstream>
using namespace std;
ifstream cin ("cabina.in");
ofstream cout ("cabina.out");
int main()
{

    int n,a,b,o=0,l=0,a1,sp=2,s=0;
    cin>>n>>a>>b;
    o=b;
    a1=a;
    n--;
    while(n)
    {
        cin>>a>>b;
        o+=b;
        if(a<a1)
        {
            if(sp==1)
                s++;
            l+=(a1-a);
            sp=0;

        }
        else
        {
            if(sp==0)
                s++;
            l+=(a-a1)*3;
            sp=1;
        }
        a1=a;
        n--;
    }
    cout<<o<<'\n';
    cout<<l<<'\n';
    cout<<s<<'\n';
}
