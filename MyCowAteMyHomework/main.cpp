#include <fstream>

using namespace std;

ifstream cin("homework.in");
ofstream cout("homework.out");

double v[1000001],s[1000002],mini[1000002],r[1000001];

int main()
{
    int n,j;
    double gr,mgr=0;
    cin>>n;
    mini[n+1]=10001;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=n;i>0;i--)
    {
        s[i]=s[i+1]+v[i];
        mini[i]=min(mini[i+1],s[i]);
    }
    for(int i=1;i<=n-2;i++)
    {
        gr=(s[i+1]-mini[i+1])/(n-i-1);
        if(gr>mgr)
        {
            mgr=gr;
            r[1]=i;
            j=2;
        }
        else if(mgr==gr)
        {
            mgr=gr;
            r[j]=i;
            j++;
        }
    }
    for(int i=1;i<=j-1;i++)
        cout<<r[i]<<'\n';
    return 0;
}
