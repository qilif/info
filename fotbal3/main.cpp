#include <fstream>

using namespace std;

ifstream cin("fotbal.in");
ofstream cout("fotbal.in");

int main()
{
    int n,m,w,l,e,s=0;
    cin>>n;
    if(n%2==0)
    {
        m=0;
        while(n--)
        {
            cin>>w>>l>>e;
            s=w*3+e;
            if(s>m)
                m=s;
        }
        cout<<m;
    }
    else
    {
        m=10000;
        while(n--)
        {
            cin>>w>>l>>e;
            if(l<m&&l>0)
                m=l;
        }
        cout<<m;
    }
    return 0;
}
