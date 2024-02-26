#include <fstream>

using namespace std;

ifstream cin("fantastic.in");
ofstream cout("fantastic.out");

int main()
{
    long long n,m,c,r=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m%2024==0&&m>0)
        {
            c=0;
            while(m)
            {
                c++;
                m/=10;
            }
            if(c%2==0)
                r++;
        }
    }
    cout<<r;
    return 0;
}
