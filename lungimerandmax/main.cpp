#include <fstream>

using namespace std;

ifstream cin ("lungimerandmax.in");
ofstream cout ("lungimerandmax.out");

int main()
{
    int n,sum,i;
    string s;
    cin>>n>>s;
    cout<<s;
    sum=s.length();
    for(i=1;cin>>s;i++)
    {
        if(sum+s.length()+1<=n)
        {
            sum+=s.length()+1;
            cout<<' '<<s;
        }
        else
        {
            sum=s.length();
            cout<<'\n'<<s;
        }
    }
    return 0;
}
