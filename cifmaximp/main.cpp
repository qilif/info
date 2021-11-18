#include <iostream>

using namespace std;

int main()
{
    int i, n, j, m, Macs, a;

    cin >> n;
    j = 0;
    Macs = 0;

    for (i = 1; i <= n; i++)
    {
        Macs = Macs - 1;
        cin >> m;
        while(m)
        {
            a = m % 10;
            if(a > Macs)
            Macs = a;
            m = m / 10;
        }
        if(Macs % 2 == 1)
            j++;
    }

    cout << j;
    return 0;
}
