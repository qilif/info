#include <iostream>

using namespace std;

int main()
{
    long long n, n1, n2;

    cin >> n;

    n1 = n % 10;
    n2 = (n / 10) % 10;

    cout << n1 + n2 << endl;
    return 0;
}
