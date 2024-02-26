#include <iostream>

using namespace std;

char v[11][11];

int main()
{
    int n,m,t,pi,pj;
    bool b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        b=true;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                cin>>v[i][j];
                if(v[i][j]=='1'&&b)
                {
                    pi=i;
                    pj=j;
                    b=false;
                }
            }
        if(v[pi+1][pj]=='1'&&v[pi][pj+1]=='1')
            cout<<"SQUARE"<<'\n';
        else
            cout<<"TRIANGLE"<<'\n';
    }
    return 0;
}
