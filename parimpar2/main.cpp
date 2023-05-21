#include <fstream>

using namespace std;

ifstream in ("parimpar2.in");
ofstream out ("parimpar2.out");

int main()
{
    int i, p, n, j = 0, ii = 0, ok=0,a=-1,b=-1,nump=-1,numi=-1;

    in >> i >> p;

    while (in >> n)
    {

        if(n%2==1){
            i--;
        }
        if(i==0)
        {
          numi=n;
          i--;
        }
        if(n%2==0){
            p--;
        }
        if(p==0){
            nump=n;
            p--;
        }
    }
    if(numi!=-1&&nump!=-1)
        out<<nump<<" "<<numi;
    else
        out<<"Nu Exista";
        return 0;
}
