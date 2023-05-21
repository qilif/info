#include <iostream>

using namespace std;

int main()
{
    int a , b, i = 0;

    cin >> a >> b;

    if (a % 2 == 0 && b % 2 == 0 || a % 2 == 1 && b % 2 == 1)
    {
        while (a)
        {
            if (a % 2 == 0)
            {
                i++;
            }
            a = a / 10;
        }
        while (b)
        {
            if (b % 2 == 0)
            {
                i++;
            }
            b = b / 10;
        }
    }
    else
    {
        while (a)
        {
            if (a % 2 == 1)
            {
                i++;
            }
            a = a / 10;
        }
        while (b)
        {
            if (b % 2 == 1)
            {
                i++;
            }
            b = b / 10;
        }
    }


    cout << i;
    return 0;
}
