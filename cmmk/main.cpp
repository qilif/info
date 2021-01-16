    #include <iostream>

    using namespace std;

    int main()
    {
        long long n, k, a, c    ;

        cin >> n >> k;

        c = 0;
        a = 0;

        while (n > 0)
        {
              c = n % 10;
              n = n / 10;
              if (c > k)
              {
                  a++;
              }
        }
        if (a == 0)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NU" << endl;
        }

        return 0;
    }
