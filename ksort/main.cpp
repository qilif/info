#include <iostream>
#include <algorithm>

using namespace std;

int v[1001];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+k+1);
    sort(v+k+1,v+n+1,greater<int>());
    for(int i=1;i<=n;i++)
        cout<<v[i]<<' ';
    return 0;
}
