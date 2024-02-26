#include <fstream>

using namespace std;

ifstream cin("div7.in");
ofstream cout("div7.out");

int s[50001];

int main()
{
    long long n,s1,m=0,r=0,id;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>id;
        s[i]=(s[i-1]+id)%7;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            s1=s[j]-s[i-1];
            if(j-i+1>r&&s1==0)
                r=j-i+1;
        }
    }
    cout<<r;
    return 0;
}
