#include <iostream>

using namespace std;

int main()
{
    int n, i, m;

    cin >> n;

    for (m = 1; m<=n; m++)
    {
        if (m%10==(m/10)%10)
        {
            i++;
        }
    }

    cout << i;
    return 0;
}
