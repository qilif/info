#include <iostream>

using namespace std;

int v[1001][1001];

int main()
{
    int n,m,k,ci,cj;
    bool b;
    cin>>n>>k;
    for(int i=1;i<=k;i++)
        for(int j=1;j<=n/k;j++)
            cin>>v[i][j];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            b=true;
            m=1;
            while(m<=n/k)
            {
                if(v[i][m]!=v[j][m])
                {
                    b=false;
                    break;
                }
                m++;
            }
            if(b)
            {
                cout<<i<<' '<<j;
                return 0;
            }
        }
    }
    cout<<"NU";
    return 0;
}
