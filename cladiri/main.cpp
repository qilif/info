#include <fstream>

using namespace std;

ifstream cin("cladiri.in");
ofstream cout("cladiri.out");

int main()
{
    int n,i,j,c1=-1,c2=0,c3=0,c4=0;
    string s;
    bool pal;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        pal=1;
        cin>>s;
        int maxim=-1;
        for(j=0;j<s.size()/2+s.size()%2;j++)
        {
            if (s[j]!=s[s.size()-j-1])
            {
                pal=0;
                c4+=abs((s[j]-'0')-(s[s.size()-j-1]-'0'));
            }
            maxim=max(maxim,max(s[j]-'0',s[s.size()-j-1]-'0'));
        }
        if (maxim>c1)
        {
            c1=maxim;
            c2=1;
        }
        else if(maxim==c1)
            c2++;
        if (pal)
            c3++;
    }
    cout<<c1<<' '<<c2<<'\n';
    cout<<c3<<'\n';
    cout<<c4<<'\n';
    return 0;
}
