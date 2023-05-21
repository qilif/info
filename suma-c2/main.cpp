#include <iostream>

using namespace std;
bool a(int d)
{
    int i;
    while(d)
    {
        d--;
        i++;
        if(i>2)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, s;
    while(n)
    {
        cin >> m;
        if(a(m))
        {
            s+=m;
        }
        n--;
    }
    cout<<s;
    return 0;
}
