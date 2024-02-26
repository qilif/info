#include <fstream>

using namespace std;

ifstream cin("robot.in");
ofstream cout("robot.out");

int d[101][101];

int main()
{
    int n,c,r=0,m=1000000,lg1,lg2;
    cin>>c>>n;
    if(c==1)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>lg1>>lg2;
            if(lg1>lg2)
            {
                lg1+=lg2;
                lg2=lg1-lg2;
                lg1-=lg2;
            }
            if(!d[lg1][lg2])
            {
                d[lg1][lg2]=1;
                r++;
            }
        }
        cout<<r;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cin>>lg1>>lg2;
            if(lg1>lg2)
            {
                lg1+=lg2;
                lg2=lg1-lg2;
                lg1-=lg2;
            }
            d[lg1][lg2]++;
        }
        for(int i=1;i<=100;i++)
            for(int j=i;j<=100;j++)
                if(m>d[i][j]&&d[i][j]>0)
                    m=d[i][j];
        cout<<m;
    }
    return 0;
}
