#include <fstream>

using namespace std;

ifstream cin ("eratostene2.in");
ofstream cout ("eratostene2.out");


int v[1000001];

void chur()
{
    for(int i=2;i<=1000000;i++)
        if(v[i]==0)
            for(int j=2;j*i<=1000000;j++)
                v[i*j]=i;
}

int main()
{
    chur();
    int n,m,i=0,x;
    cin>>n;
    while(n)
    {
        cin>>m;
        if(m==1)
            cout<<i<<' ';
        while(m>1)
        {
            if(v[m])
            {
                x=v[m];
                while(m%x==0)
                    m/=x;
                i++;
                if(m==1)
                {
                    cout<<i<<' ';
                    i=0;
                }
            }
            else
            {
                cout<<i+1<<' ';
                i=0;
                m=1;
            }
        }
        n--;
    }
    return 0;
}
