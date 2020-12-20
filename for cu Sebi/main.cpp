#include <iostream>

using namespace std;

int main()
{
    int n, i, nrp, nri;

    cout << "n=";
    cin >> n;

    nri = 0;
    nrp = 0;
    for(i = 1; i <= n; i++)
    {
        if(i%2 == 0)
        {
            nrp++;
        }
        else
        {
            nri++;
        }
    }

    cout << nrp << " " << nri << '\n';

    return 0;
}
