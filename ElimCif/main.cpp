    #include <iostream>

    using namespace std;

    int main()
    {
        int n, a, c;

        cin >> n;
        a = n % 10;
        c = n / 100;

        cout << c << a;
        return 0;
    }
