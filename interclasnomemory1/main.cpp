#include <fstream>

using namespace std;

ifstream cin("file.in");
ofstream cout("file.out");
ofstream cout1("file1.in");
ifstream cin1("file1.in");

int main()
{
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        cout1<<x<<' ';
    }
    cout1.close();
    cin1>>x;
    cin>>y;
    while(m&&n)
    {
        if(x>y)
        {
            cout<<y<<' ';
            cin>>y;
            m--;
        }
        else
        {
            cout<<x<<' ';
            cin1>>x;
            n--;
        }
    }
    while(n--)
    {
        cout<<x<<' ';
        cin1>>x;
    }
    while(m--)
    {
        cout<<y<<' ';
        cin>>y;
    }
    return 0;
}
