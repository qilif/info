#include <iostream>

using namespace std;

int main()
{
    int n, i, j, p, s;

    cin >> n;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        p = 1;
        for (j = 1;j <= i; j++)
        {
            p = p * i;
            s = s + p;
        }


    }

    cout << s;
    return 0;
}
