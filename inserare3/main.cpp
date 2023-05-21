#include <iostream>

using namespace std;
long long v[1001];
int main()
{
    long long n, mini, i;
    cin >> n>>v[1];
    mini=v[1];
    for(i = 2; i <= n; i++)
    {
        cin >> v[i];
        if(v[i]<mini)
            mini = v[i];
    }
    for(i =1; i<=n; i++)
    {
        cout << v[i] << " ";
        if(v[i]=1=mini)
            cout<<v[i] << " ";
    }
    return 0;
}
