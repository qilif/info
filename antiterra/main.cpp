#include <fstream>

using namespace std;
ifstream cin ("antiterra.in");
ofstream cout ("antiterra.out");

int main()
{
    char n;
    int m,s=0;
    cin>>m;
    cin.get(n);
    if(n=='+')
        s=s+m;
    if(n=='-')
        s=s-m;
    if(n==' ')
        s=s+m;

    while(cin>>m && cin.get(n))
    {
        if(n=='-')
            s=s-m;
        else if(n=='+')
            s=s+m;
        else if(n==' ')
            s=s+m;
        else
            s=s+m;
        m=n;
    }
    cout<<s;
}
