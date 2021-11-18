#include <iostream>

using namespace std;

int main()
{
    long long argint, aur, rubin, ar, au, rub, i, n;

    cin >> n;
    argint = 4;
    aur = 5;
    rubin = 7;

    for (i = 1; i <= n; i++)
    {
        ar = argint;
        au = aur;
        rub = rubin;
        argint = ar + au;
        aur = ar + rub;
        rubin = ar + au + rub;
    }

    cout << argint << " " << aur << " " << rubin << endl;
    return 0;
}
