#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;
    while(n)
    {
        cin>>a>>b>>c;
        int c1=c-1;
        if(c1>b||c1<a)
        {
            while(c1<=a)
                c1+=c;
            if(c1>b)
                c1=b;
        }
        while(c1>=a&&c1<=b)
            c1+=c;
        c1-=c;
        if(c1%c==0&&c1!=1&&c!=1)
            c1--;
        cout<<(c1/c)+c1%c<<'\n';

        n--;
    }
    return 0;
}
