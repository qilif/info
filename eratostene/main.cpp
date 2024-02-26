#include <fstream>

using namespace std;

ifstream cin ("eratostene.in");
ofstream cout ("eratostene.out");

bool v[1000001];

void chur()
{
    for(int i=2;i<=1000001;i++)
        if(v[i]==0)
            for(int j=2;i*j<=1000001;j++)
                v[i*j]=1;
}

int main()
{
    chur();
    int n,m,i=0;
    cin>>n;
    while(n)
    {
        cin>>m;
        if(v[m]==0)
            i++;
        n--;
    }
    cout<<i;
    return 0;
}
