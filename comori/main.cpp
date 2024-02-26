#include <fstream>
using namespace std;
ifstream in ("comori.in");
ofstream out ("comori.out");
int main()
{
    int n,a,b,x=0,y=0;
    in>>n;
    while(n)
    {
        in>>a>>b;
        if(a==1)
            y=y+b;
        else if(a==2)
        {
            y=y+b;
            x=x+b;
        }
        else if(a==3)
            x=x+b;
        else if(a==4)
        {
            y=y-b;
            x=x+b;
        }
        else if(a==5)
            y=y-b;
        else if(a==6)
        {
            y=y-b;
            x=x-b;
        }
        else if(a==7)
            x=x-b;
        else if(a==8)
        {
            y=y+b;
            x=x-b;
        }
        n--;
    }
    out<<x<<' '<<y;
    return 0;
}
