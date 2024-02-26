#include <iostream>

using namespace std;

int main()
{
    int n,m,nm,mm,pcm=10;
    cin>>n;
    while(n--)
    {
        cin>>m;
        mm=m;
        while(mm>10)
            mm/=10;
        if(mm<pcm)
        {
            pcm=mm;
            nm=m;
        }
        else if(mm==pcm&&nm<m)
            nm=m;
    }
    cout<<nm;
    return 0;
}
