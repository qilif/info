#include <iostream>

using namespace std;

int c[1000001],v[1000001];

void chur()
{
    for(int i=2;i<=1000000;i++)
        if(c[i]==0)
            for(int j=2;j*i<=1000000;j++)
                c[j*i]=i;
    c[1]=1;
    int j=1;
    for(int i=2;i<=1000000;i++)
        if(c[i]&&c[i/c[i]]==0)
        {
            v[j]=i;
            j++;
        }
}

int main()
{
    chur();
    int n;
    cin>>n;
    cout<<v[n];
    return 0;
}
