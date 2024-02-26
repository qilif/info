#include <fstream>

using namespace std;

ifstream cin("crossroad.in");
ofstream cout("crossroad.out");

int main()
{
    int n, id, s, w[11][2],cnt=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>id>>s;
        if(w[id][0]!=s && w[id][1]==1)
        {
            cnt++;
            w[id][0]=s;
        }
        else
        {
            w[id][0]=s;
            w[id][1]=1;
        }
    }
    cout<<cnt;
}
