#include <iostream>

using namespace std;

int main()
{
    int n,m,mp=-1,mi=100;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        if(i%2==1&&m>=10&&m<=99&&m<mi)
            mi=m;
        if(i%2==0&&m>mp)
            mp=m;
    }
    if(mi==100)
        mi=-1;
    cout<<mp<<' '<<mi;
    return 0;
}
