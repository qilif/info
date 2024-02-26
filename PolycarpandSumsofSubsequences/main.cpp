#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d,e,f,g;
    cin>>n;
    while(n)
    {
        cin>>a>>b>>c>>d>>e>>f>>g;
        cout<<a<<' '<<b<<' '<<g-a-b<<'\n';
        n--;
    }
    return 0;
}
