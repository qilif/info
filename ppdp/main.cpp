#include <iostream>
using namespace std;
int main()
{
    long long n,p,s=0,i=0;
    cin>>n;
    for(p=2;p<=n;p++)
    {
        if(n%p==0)
        {
            s+=p;
            i++;
            if(i==2)
                break;
        }

    }
    cout<<s;
    return 0;
}
