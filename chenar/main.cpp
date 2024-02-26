#include <fstream>

using namespace std;

ifstream cin ("chenar.in");
ofstream cout ("chenar.out");

int v[24][24];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>v[i][j];
    for(int i=1;i<=n;i++)
        cout<<v[1][i]<<' ';
    for(int i=2;i<=n;i++)
        cout<<v[i][n]<<' ';
    for(int i=n-1;i>0;i--)
        cout<<v[n][i]<<' ';
    for(int i=n-1;i>1;i--)
        cout<<v[i][1]<<' ';
}
