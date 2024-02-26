#include <iostream>

using namespace std;

int main()
{
    int n,m,t,ii;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=0;
        for(int i=1;i<=n;i++)
        {
            ii=i;
            while(ii)
            {
                m+=ii%10;
                ii/=10;
            }
        }
        cout<<m<<'\n';
    }
    return 0;
}
//5000000000000
//200012
