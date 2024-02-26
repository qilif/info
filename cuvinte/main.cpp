#include <fstream>

using namespace std;

ifstream cin ("cuvinte.in");
ofstream cout ("cuvinte.out");

int main()
{
    int c=0,x=0;
    char n;
    while(cin.get(n))
    {
        if(n==' '||n=='.'||n==','||n=='\n')
        {
            x+=c;
            c=0;
        }
        else
            c=1;
    }
    cout<<x<<'\n';
}
