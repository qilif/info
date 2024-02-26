#include <iostream>

using namespace std;

int main()
{
    int n,x,y,cx,s=0,p=10;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x>9)
        {
            cx=x;
            p=10;
            while(p<=cx)
            {
                y=x%p;
                x/=p;
                while(x%p==y && x%p>p/10)
                    x/=p;
                if(x==0)
                {
                    s+=cx;
                    break;
                }
                x=cx;
                p*=10;
            }
        }
    }
    cout<<s;
    return 0;
}
