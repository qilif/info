#include <iostream>

using namespace std;

int vf[1000];

int main()
{
    int n,m,j=0,m1=0,m2=0;
    cin>>n;
    while(n)
    {
        cin>>m;
        if(m<=999) vf[m]++;
        n--;
    }
    for(int i=999;i>=100;i--)
    {
        if(vf[i]==0&&j==0)
        {
            m1=i;
            j++;
        }
        else if(vf[i]==0&&j==1)
        {
            m2=i;
            break;
        }
    }
    if((m1==0||m2==0)||(m1==0&&m2==0))
        cout<<"NU EXISTA";
    else
        cout<<m2<<' '<<m1<<' ';
    return 0;
}
