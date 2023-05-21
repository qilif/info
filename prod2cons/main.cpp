#include <iostream>

using namespace std;

int main()
{
    long long n, m=2, i=1;

    cin >> n;
    while(m*i<n)
    {
        i++;
        m++;
    }
    if (m*i==n)
    {
        cout<<i << " "<<m;
        return 0;
    }

    cout << "NU EXISTA";
    return 0;
}
