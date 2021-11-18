#include <iostream>

using namespace std;

int main()
{
    int n, m, meeeee;

    cin >> n;
    m = 1;
    meeeee = 0;

    while (n)
    {
        if (n%10 % 2 == 1)
        {
            m = m * (n % 10);
            meeeee = 1;
        }
        n = n / 10;
    }
    if (meeeee == 0)
    {
        m = -1;
    }

    cout << m;
    return 0;
}
