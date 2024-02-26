#include <fstream>

using namespace std;

ifstream cin("maximpar.in");
ofstream cout("maximpar.out");

int main()
{
    int n,m,nm=-1001,i=1;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(nm==m)
            i++;
        else if(nm<m&&m%2==0)
        {
            i=1;
            nm=m;
        }
    }
    if(nm==-1001)
        cout<<-1;
    else
        cout<<nm<<' '<<i;
    return 0;
}
