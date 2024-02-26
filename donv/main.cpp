#include <fstream>
using namespace std;
int main()
{
    ifstream cin("dconv.in");
    ofstream cout("dconv.out");
    int n;
    long long int a=0, rez=1;
    cin >> n;
    while(n>rez)
    {
        rez=rez*2;
    }
    rez=rez/2;
    if(rez*2==n)
    {
        rez=rez*2;
    }
    if(n == 1)
    {
        cout << 1;
        return 0;
    }
    while(rez>0)
    {
        if(n-rez>=0)
        {
            a=a*10+1;
            n=n-rez;
        }
        else
        {
            a=a*10+0;
        }
        rez=rez/2;
    }
    rez=1;
    while(a>rez)
    {
        rez=rez*2;
    }
    rez=rez/2;
    if(rez*2==a)
    {
        rez=rez*2;
    }
    while(rez>0)
    {
        if(a-rez>=0)
        {
            cout << 1;
            a=a-rez;
        }
        else
        {
            cout << 0;
        }
        rez=rez/2;
    }
}
