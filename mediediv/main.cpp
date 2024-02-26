#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long n, j=0;
    float ma=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            ma+=i;
            j++;
        }
    }
    cout<<fixed<<setprecision(2)<<ma/j;
    return 0;
}
