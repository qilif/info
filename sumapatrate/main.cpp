#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, m=0, i;
    cin>>n;
    for(i=1;i<=n;i++)
        m+=i*i;
    cout << m%10234573;
    return 0;
}
