#include <fstream>
using namespace std;
ifstream in ("rachete.in");
ofstream out ("rachete.out");
int main()
{
    int n,m,i=0,j=0,y=0;
    in>>n;
    while(n)
    {
        in>>m;
        if(m==1)
            i++;
        else if(m==2)
            j++;
        else
            y++;
        n--;
    }
    while(i)
    {
        out<<1<<' ';
        i--;
    }
    while(j)
    {
        out<<2<<' ';
        j--;
    }
    while(y)
    {
        out<<3<<' ';
        y--;
    }
    return 0;
}
