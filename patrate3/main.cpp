#include <fstream>

using namespace std;

ifstream cin ("patrate3.in");
ofstream cout ("patrate3.out");

int main()
{
    long long c,n,s=1;
    cin>>c>>n;
    if(c==1)
        cout<<n*8;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(s*8<n&&(s+i)*8>=n)
            {
                cout<<i;
                return 0;
            }
            s+=i;
        }
    }
    return 0;
}
