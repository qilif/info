#include <fstream>

using namespace std;

ifstream cin("furnica.in");
ofstream cout("furnica.out");

int v[100][100],v1[100][100];

int main()
{
    int n,m,x,i,j,s=2,maxi=0,y=0;
    cin>>x>>n;
    for(i=1;i<=x;i++)
        for(j=1;j<=x;j++)
            v[i][j]=(i+j)%6;
    v[1][1]=0;
    v1[1][1]=1;
    i=1;
    j=1;
    while(n)
    {
        cin>>m;
        if(m==1)
            i--;
        else if(m==2)
        {
            i--;
            j++;
        }
        else if(m==3)
            j++;
        else if(m==4)
        {
            i++;
            j++;
        }
        else if(m==5)
            i++;
        else if(m==6)
        {
            i++;
            j--;
        }
        else if(m==7)
            j--;
        else if(m==8)
        {
            i--;
            j--;
        }
        s+=v[i][j];
        v1[i][j]++;
        v[i][j]=0;
        if(maxi<v1[i][j])
            maxi=v1[i][j];
        n--;
    }
    for(int i=1;i<=x;i++)
        for(int j=1;j<=x;j++)
            if(v1[i][j]==maxi)
                y++;
    cout<<s<<' '<<y;
    return 0;
}
