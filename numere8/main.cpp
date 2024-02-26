#include <fstream>

using namespace std;

ifstream cin ("numere8.in");
ofstream cout ("numere8.out");


int vf[10000];

int main()
{
    long long n;
    while(cin>>n)
        if(n<=9999)
            vf[n]++;
    for(int i=9999;i>0;i--)
        if(vf[i]==0)
            cout<<i<<' ';
    return 0;
}
