#include <iostream>

using namespace std;

char v[10];

int main()
{
    int n,i=1;
    cin>>n;
    while(n)
    {
        v[i]=n%16;
        if(n%16>9)
            v[i]='A'-10+n%16;
        else
            v[i]+='0';
        i++;
        n/=16;
    }
    i--;
    while(i)
    {
        cout<<v[i];
        i--;
    }
    return 0;
}
