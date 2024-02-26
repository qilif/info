#include <fstream>

using namespace std;

unsigned long long v[100001];

ifstream cin("intersectie.in");
ofstream cout("intersectie.out");

int main()
{
    unsigned long long m=1;
    int i=1,p=1;
    while(m!=0)
    {
        cin>>m;
        if(m!=0)
            v[i++]=m;
    }
    p=i;
    i=1;
    while(cin>>m)
    {
        if (m==0)
        {
            if(i<p)
                p=i;
            i=1;
        }
        else
        {
            while(v[i]<m&&i<p)
                v[i++]=0;
            while(v[i]==m&&i<p)
                i++;
        }
    }
    bool b=false;
    for(i=1;i<p;i++)
        if(v[i]!=0) {
            cout<<v[i]<<' ';
            b=true;
        }
    if(!b)
    {
        cout<<"nu exista";
        return 0;
    }
    return 0;
}
