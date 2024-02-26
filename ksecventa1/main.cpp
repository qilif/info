#include <iostream>

using namespace std;

int v[100001];

int main()
{
    int n,m,k,ci,cj;
    bool b;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=2;k+i-1<=n;i++)
    {
        ci=i;
        for(int j=1;j<i;j++)
        {
            b=true;
            cj=j;
            while(ci<k+i-1)
            {
                if(v[ci]!=v[cj])
                {
                    b=false;
                    break;
                }
                ci++;
                cj++;
            }
            if(b)
            {
                cout<<j<<' '<<i;
                return 0;
            }
        }
    }
    cout<<"NU";
    return 0;
}
