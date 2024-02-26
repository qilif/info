#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i=0,p=0;
    cin>>a>>b>>c;
    if(a%2==0)
        p++;
    else
        i++;
    if(b%2==0)
        p++;
    else
        i++;
    if(c%2==0)
        p++;
    else
        i++;
    if(p>i)
        cout<<"pare";
    else
        cout<<"impare";
    return 0;
}
