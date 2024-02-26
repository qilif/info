#include <iostream>
#include <string>

using namespace std;

bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
        if (j == M)
            return true;
    }
    return false;
}

int main()
{
    string x;
    string s;
    int m, n;
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        cin >> n >> m;
        cin >> x;
        cin >> s;
        int moves = 0;
        bool found = false;
        while(x.length() < s.length() * 100) {
            if(isSubstring(s, x)) {
                cout << moves << endl;
                found = true;
                break;
            }
            moves++;
            x += x;
        }
        if(!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
