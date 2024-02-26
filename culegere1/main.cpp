#include <iostream>

using namespace std;

int main()
{
    int p,n,s=0,nrcif=1,c=0;                              //t max = 9 //s max=100000000
    cin>>p>>n;
    for(int i=1;i<=p;i++)
    {
        s+=i;
        if(s<9&&nrcif=1)
            cif+=i;
        else if(s>9&&nrcif=1)
        {
            cif=cif+(i-(s-9));
            cif=cif+(2*(s-9));
            nrcif++;
        }
        else if(s>99&&nrcif=2)
        {
            cif=cif+(i-(s-9));
            cif=cif+(2*(s-9));
            nrcif++;
        }
    }
    return 0;
}
