#include <iostream>

using namespace std;
int v[1000001];
int main()
{
    long long n;
    cin>>n;
    for(int i = 1; i<=n;i++)
    {
        cin >> v[i];
        if(i==n)
        {
            v[i]=0;
        }
    }
    for(int i = 1; i<=n;i++)
        cout << v[i] << ' ';
    return 0;
}
