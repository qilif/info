    #include <iostream>

    using namespace std;

    int main()
    {
        int x, y;

        cin >> x >> y;
        if (x > y);
            swap (x, y);
        if (x % 2 == 0 && y % 2 == 1 && y - x == 1)
            cout << "Andrei e mai responsabil";
        else
            cout << "minciuna";
        return 0;
    }
