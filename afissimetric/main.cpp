#include <iostream>

using namespace std;

string v[11];

int main()
{
    bool cnt=true;
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
        getline(cin,v[i]);
    while(cnt)
    {
        cnt=false;
        for(int i=1;i<=n;i++)
        {
            if(v[i]=="")
                continue;
            int p=v[i].find(' ');
            if(p==-1)
            {
                cout<<v[i]<<'\n';
                v[i]="";
                cnt=true;
                continue;
            }
            cout<<v[i].substr(0,p)<<'\n';
            v[i]=v[i].substr(p+1);
            cnt=true;
        }
    }
    return 0;
}
