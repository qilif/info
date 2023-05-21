#include <iostream>

using namespace std;

int main()
{
    long long n, m, i =2;

    cin >> n;

    while(n)
    {
        m=m*i;
        i=i+2;
        n--;
    }

    cout << m;
    return 0;
}
