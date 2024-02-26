#include <fstream>
using namespace std;
ifstream cin ("robot3.in");
ofstream cout ("robot3.out");
int main()
{
    int c,n,p,i=0,s=0;
    char a;
    cin>>c;
    if(c==1)
    {
        while(a!=T)
        {
            cin>>a;
            if(a=='A')
                i++;
        }
        cout<<i;
    }
    else if(c==2)
    {
        while(a!='T')
        {
            cin>>a;
            if(a=='D')
            {
                cin>>p;
                s+=p;
            }
            else
            {
                cin>>p;
                s-=p;
            }
            if(s>9)
                s=s%10;
            else if(s<0)
                s=s*-1;
            if(a=='A')
                cout<<s;
        }
    }
    else
    {
        cin>>n;
        while(n)
        {

        }
    }
    return 0;
}
