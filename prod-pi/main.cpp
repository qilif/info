#include <iostream>

using namespace std;

int main()
{
    long long n, s, p = 0, i = 0;

    cin >> n;

    while (n)
    {
        if(n % 10 % 2 == 0 && n % 10 > p)
        {
            p = n % 10;
        }
        if(n % 10 % 2 == 1 && n % 10 < i)
        {
            i = n % 10;
        }
    }

    return 0;
}
