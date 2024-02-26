#include <fstream>

using namespace std;

ifstream cin("square.in");
ofstream cout("square.out");

int main()
{
    int a,b,c,d,e,f,g,h,i=0,d1=0,s=0,j=0;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    i=max(max(a,c),max(e,g));
    j=min(min(a,c),min(e,g));
    s=min(min(b,d),min(f,h));
    d=max(max(b,d),max(f,h));
    cout<<max(i-j,d-s)*max(i-j,d-s);
    return 0;
}
