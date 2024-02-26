#include <fstream>
using namespace std;
ifstream cin("magic.in");
ofstream cout("magic.out");
int w[11];
int main()
{
    int n,k;
    cin>>n;
    char c;
    bool b=false;
    while(cin>>c)
    {
        if(c>47 && c<58)
        {
            c-=48;
            w[c]++;
        }
        else
        {
            c-=32;
            cout<<c;
        }
    }
    cout<<endl;
    for(int i=1; i<10; i++)
    {
        if(w[i]>0)
        {
            cout<<i;
            if(b==false&&w[0]>0)
            {
                cout<<'0';
                b=true;
            }
        }
    }
}
