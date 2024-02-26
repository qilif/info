#include <fstream>

using namespace std;

ifstream cin("bibinar.in");
ofstream cout("bibinar.out");

int v[40];

int main()
{
    int n,m,s,c,i,nr1=0,nr0=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        s=0;
        i=1;
        while(m)
        {
            v[i]=m%2;
            i++;
            m/=2;
        }
        i--;
        while(i)
        {
            for(int j=i-1;j;j--)
            {
                if(v[i]==1)
                {
                    if(v[j]==0)
                        s+=2;
                    else
                        s+=3;
                }
                else
                {
                    if(v[j]==1)
                        s+=1;
                }
            }
            i--;
        }
        cout<<s<<' ';
    }
    return 0;
}
