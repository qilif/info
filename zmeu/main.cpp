#include <fstream>

using namespace std;

ifstream

int main()
{
    long long n, m, a, b, c;

    cin >> n >> m;

    a = m * 2;
    b = n / a;
    c = n % a;

    cout << b << endl;
    cout << a - c;
    return 0;
}
