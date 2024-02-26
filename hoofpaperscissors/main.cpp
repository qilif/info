#include <fstream>

using namespace std;

ifstream cin("hps.in");
ofstream cout("hps.out");

int main()
{
    int n,a,b,c1=0,c2=0;
    cin>>n;
    while(n)
    {
        cin>>a>>b;
        if((a==1&&b==2)||(a==2&&b==3)||(a==3&&b==1))
            c1++;
        else if((a==1&&b==3)||(a==3&&b==2)||(a==2&&b==1))
            c2++;
        n--;
    }
    cout<<max(c1,c2);
    return 0;
}
