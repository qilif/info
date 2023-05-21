#include <iostream>

using namespace std;

int main()
{
    long long n, ma, i = 0, j = 0, m,s;

    cin >> n;
    cin >> m;
    ma = m;
    s=m;
    i++;
    n--;

    while (n)
    {
        cin >> m;
        i++;
        s+=m;
        if (ma < m)
        {
            ma=m;
        }
        n--;
    }

    cout << ma*i-s;
    return 0;
}
