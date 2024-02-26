#include <iostream>

using namespace std;
int v[50001];
int main()
{
    int n,m,i,j;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]==1)
            j=i;
    }

    return 0;
}
