#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, i = 0, m = 1;

    cin >> n;
    if (sqrt(n)==(int)sqrt(n))
    {
        cout << 0 <<  " " << n;
        return 0;
    }
    for (i = 1; i * i < n; i++)
    {
        m = n - i* i;
        if (sqrt(m)==(int)sqrt(m))
        {
            cout << i*i <<  " " << m;
            return 0;
        }
    }
    cout << "NU";
    return 0;
}
