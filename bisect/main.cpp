#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
            {
                cout << "bisect" << endl;
            }
            else
            {
                cout << "nebisect" << endl;
            }
        }
        else
        {
            cout << "bisect" << endl;
        }
    }
    else
    {
        cout << "nebisect" << endl;
    }

    return 0;
}
