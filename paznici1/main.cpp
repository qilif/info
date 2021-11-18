#include <iostream>

using namespace std;

int main()
{
    long long n, m;

    cin >> n >> m;


    cout << (m % 2 + m / 2) * (n % 2 + n / 2);
    return 0;
}
