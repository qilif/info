#include <fstream>

using namespace std;

ifstream cin ("maxcif.in");
ofstream cout ("maxcif.out");

int v[10];

int main()
{
    int n,m,maxi=0;
    while(cin>>n)
        v[n]++;
    for(int i=0;i<=9;i++)
        if(v[i]>maxi)
            maxi=v[i];
    for(int i=0;i<=9;i++)
        if(v[i]==maxi)
            cout<<i<<' ';
    return 0;
}
