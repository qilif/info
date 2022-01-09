#include <fstream>

using namespace std;

ifstream cin ("comori1.in");
ofstream cout ("comori1.out");


int main()
{
    int n, m = 0, i, j = 0, a;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (j > a)
        {
            m = i;
            cout << m << " ";
        }
        j = a;
    }
    if (m == 0)
    {
        cout << m;
    }

    return 0;
}
