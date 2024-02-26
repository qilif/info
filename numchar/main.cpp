#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n,l=0,c=0;
    char s[2000000];
    cin>>n;
    cin.get();
    cin.get(s,n);
    for(int i=0;i<=n;i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            l++;
        else if(s[i]>='0'&&s[i]<='9')
            c++;
        n--;
    }
    cout<<l<<' '<<c;
    return 0;
}
