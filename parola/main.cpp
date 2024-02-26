#include <fstream>
#include <cstring>

using namespace std;

ifstream cin ("parola.in");
ofstream cout ("parola.out");

int main()
{
    int k,n=0,i=0,j,m;
    char a[10],b[10];
    cin>>k;
    cin.getline(a,10);
    cin>>a>>b;
    j=strlen(b)-1;
    m=strlen(a);
    while(k)
    {
        cout<<a[i];
        i++;
        k--;
    }
    cout<<b[j--];
    while(i<m||j>=0)
    {
        if(i<m)
        {
            cout<<a[i];
            i++;
        }
        if(j>=0)
        {
            cout<<b[j];
            j--;
        }
    }
    return 0;
}
