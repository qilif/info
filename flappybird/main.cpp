#include <fstream>

using namespace std;
ifstream in ("flappybird.in");
ofstream out ("flappybird.out");
int main()
{
    int n,x,y,a,b;
    in>>n;
    in>>a>>b;
    while(n)
    {
        in>>x>>y;
        if(x>b||y<a)
        {
            out<<"NO";
            return 0;
        }
        a=x;
        b=y;
        n--;
    }
    out<<"YES";
    return 0;
}
