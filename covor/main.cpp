#include <iostream>

using namespace std;

int main()
{
    int n,k,c,m=4,i,p=7;
    cin>>n>>k>>c;
    if(c==1)
    {
        for(i=1;m<=n;i++)
        {
            m+=p;
            p+=4;
        }
        cout<<i-1;
    }
    else
    {
        for(i=1;m<=n;i++)
        {
            m+=p;
            p+=4;
        }
        i--;

    }
    return 0;
}
