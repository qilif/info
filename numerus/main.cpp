#include <fstream>
using namespace std;
ifstream cin ("numerus.in");
ofstream cout ("numerus.out");
int main()
{
    int k,n;
    cin>>k>>n;
    if(k%2==0)
        cout<<k*5<<' '<<k*5<<' '<<k*5-1<<' '<<k*5-2<<' '<<k*5-3<<' '<<k*5-4<<'\n';
    else
        cout<<k*5-4<<' '<<k*5-3<<' '<<k*5-2<<' '<<k*5-1<<' '<<k*5<<' '<<k*5<<'\n';
    if(n%5==0)
    {
        cout<<n/5<<'\n';
        if((n/5)%2==0)
            cout<<'A'<<' '<<'B';
        else
            cout<<'E'<<' '<<'F';
    }
    else
    {
        cout<<n/5+1<<'\n';
        if((n/5+1)%2==0)
        {
            if(n%5==1)
                cout<<'F';
            else if(n%5==2)
                cout<<'E';
            else if(n%5==3)
                cout<<'D';
            else
                cout<<'C';
        }
        else
        {
            if(n%5==1)
                cout<<'A';
            else if(n%5==2)
                cout<<'B';
            else if(n%5==3)
                cout<<'C';
            else
                cout<<'D';
        }
    }
    return 0;
}
