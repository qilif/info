#include <iostream>

using namespace std;
int v[100001];
int main()
{
    int n,i=1,m;
    cin>>n;
    while(n)
    {
        cin>>m;
        while(i<=m)
        {
            cin>>v[i];
            i++;
        }
        i=1;
        while(v[i]<v[m])
        {
             if(v[i]<v[i+1])
                v[i]=v[i+1];
             i++;
        }
        cout<<i<<'\n'
        n--;
    }
    return 0;
}
