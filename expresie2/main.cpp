#include <iostream>

using namespace std;

int main()
{
    long long n, s;

    cin >> n;
    s = 0;

    for (long long i = 1; i <= n; i++)
    {
        s+=i * (i + 1);
    }

    cout << "Rezultatul este " << s;
    return 0;
}
