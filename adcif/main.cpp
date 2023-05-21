#include <iostream>

using namespace std;

int main()
{
    long long n, s=0, ma=-1;

    cin >> n;

    while (n)
    {
        if (n%10>ma)
        {
            ma=n%10;
            s=s+ma;
        }
        n=n/10;
    }

    cout << s;
    return 0;
}
