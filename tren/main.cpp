#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("tren.in");
ofstream cout("tren.out");
int main(){
    int n,l,h,m,s,l1=0,l2=0,n1,mt=0,dif=0,mm;
    cin>>n>>l>>h>>m>>s;
    n1=n;
    if(l==1)
    {
        l1++;
        mt=m+s+h*60;
    }
    else
        l2++;
    mm=m+s+h*60;
    n--;
    while(n)
    {
        cin>>l>>h>>m>>s;
        m+=s+h*60;
        if(l==2&&mt>m)
            n1--;
        else if(dif<m-s-mm)
        {
            dif=m-s-mm;
            mm=m;
        }
        if(l==1)
        {
            l1++;
            mt=m;
        }
        else
            l2++;
        n--;

    }
    cout<<max(l1,l2)<<' '<<n1<<' '<<dif-1;
    return 0;
}
