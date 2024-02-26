#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin ("sortare.in");
ofstream cout ("sortare.out");


int v[101];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1, v+n+1, greater<int>());
    for (int i=1;i<=n;i++)
        cout<<v[i]<<' ';
    return 0;
}
