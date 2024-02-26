#include <iostream>
#include<fstream>
using namespace std;
ifstream in("balba.in");
ofstream out("balba.out");
int main()
{
    long long c,cif,cifrele,cate=0,celelaltecate=0,cifra2=0,af=0;
    in>>c>>cif;
    int v[100001];
    for(int i=0;i<100001;i++){
        v[i]=1;
    }
    for(int i=0;i<cif;i++){
        in>>cifrele;
        v[i]=cifrele;
        if(cifrele!=cifra2)
            cate++;
        cifra2=cifrele;
    }
    for(int i=0;i<cif;i++){
        if(v[i]==v[i+1]&&v[i+2]!=v[i])
            celelaltecate++;
    }
    out<<cate<<endl;
    out<<celelaltecate;
    return 0;
}
