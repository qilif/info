#include <iostream>

using namespace std;

int main()
{
    int n, m, p = 1, i = 0, s = 0;

    cin >> n;

    if (n % 5 != 0)
    {
        m = n / 5 + 1;
        cout << m << endl;
    }
    else
    {
        m = n / 5;
        cout << m << endl;
    }
    if (n % 5 == 0)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
    i=1;
    while (s < n)
    {
        s+= 5 * i;
        if(i % 2 == 0)
        {
            p = 2;
        }
        else
        {
            p = 1;
        }
        i++;
    }
    if (p == 1)
    {
        cout << "micsunele";
    }
    else
    {
        cout << "panselute";
    }
    return 0;
}
