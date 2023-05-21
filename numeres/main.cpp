#include <iostream>

using namespace std;

int main()
{
    int n, s, b = 1, a, i, cnt = 0, num, sum;

    cin >> n >> s;

    for (i = 1; i <= n; i++)
    {
        b = b * 10;
    }
    a = b / 10;
    for (i = a; i < b; i++)
    {
        sum = 0;
        num = i;
        while (num)
        {
            sum = sum + num % 10;
            num = num / 10;
        }
        if (sum == s)
        {
            cout << i << " ";
            cnt++;
        }
    }
    if (cnt != 0)
    {
        cout << endl << cnt;
    }
    else
    {
        cout << "0";
    }
    return 0;
}
