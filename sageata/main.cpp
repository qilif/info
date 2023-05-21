    #include <iostream>

    using namespace std;

    int main()
    {
        int n, m, l, s = 0, s1 = 0;

        cin >> n;
        m = n;
        l = n * 2 - 1;

        while (l - n != 0)
        {
            while (s != 0)
            {
                cout << " ";
                s--;
            }
            s1 = s1 + 1;
            s = s1;
            while (n != 0)
            {
                cout << "*";
                n--;
            }
            cout << '\n';
            n = m;
            l--;
        }
        while (l != 0)
        {
            while (s != 0)
            {
                cout << " ";
                s--;
            }
            s1 = s1 - 1;
            s = s1;
            while (n != 0)
            {
                cout << "*";
                n--;
            }
            cout << '\n';
            n = m;
            l--;
        }

        return 0;
    }
