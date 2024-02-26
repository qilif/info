#include <iostream>

using namespace std;

bool v[1000001];

void chur(int n)
{
    for(int i=2;i<=n;i++)
        if(v[i]==0)
        {
            for(int j=1;i*j<=n;j++)
                v[i*j]=1;
            cout<<i<<' ';
        }
}

int main()
{
    int n;
    cin>>n;
    chur(n);
    return 0;
}
