#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m<29)
        {
            char c=94+m;
            cout<<"aa"<<c<<'\n';
        }
        else if(m<53)
        {
            char c=69+m;
            cout<<"a"<<c<<"z"<<'\n';
        }
        else
        {
            char c=44+m;
            cout<<c<<"zz"<<'\n';
        }
    }
    return 0;
}
