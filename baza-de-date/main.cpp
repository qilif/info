#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct articol
{
    unsigned long long salariu, varsta;
    char nume[256], prenume[256], functie[256], email[256], nrtelefon[256];
};

articol m[81];

int p;
char c;

bool cmp(articol a, articol b)
{
    if(p==1&&c=='+') return strcmp(a.prenume, b.prenume)<=0;
    if(p==1&&c=='-') return strcmp(a.prenume, b.prenume)>=0;

    if(p==2&&c=='+') return strcmp(a.nume, b.nume)<=0;
    if(p==2&&c=='-') return strcmp(a.nume, b.nume)>=0;

    if(p==3&&c=='+') return a.salariu<=b.salariu;
    if(p==3&&c=='-') return a.salariu>=b.salariu;

    if(p==4&&c=='+') return a.varsta<=b.varsta;
    if(p==4&&c=='-') return a.varsta>=b.varsta;

    if(p==5&&c=='+') return strcmp(a.functie,b.functie)<=0;
    if(p==5&&c=='-') return strcmp(a.functie,b.functie)>=0;

    if(p==6&&c=='+') return strcmp(a.nrtelefon,b.nrtelefon)<=0;
    if(p==6&&c=='-') return strcmp(a.nrtelefon,b.nrtelefon)>=0;

    if(p==7&&c=='+') return strcmp(a.email,b.email)<=0;
    if(p==7&&c=='-') return strcmp(a.email,b.email)>=0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>m[i].prenume >> m[i].nume >> m[i].salariu >> m[i].varsta >> m[i].functie >> m[i].nrtelefon >> m[i].email;
    cin>>p>>c;
    sort(m+1, m+n+1, cmp);
    for(int i=1;i<=n;i++)
        cout << m[i].prenume << ' ' << m[i].nume << ' ' << m[i].salariu << ' ' << m[i].varsta << ' ' << m[i].functie << ' ' << m[i].nrtelefon << ' ' << m[i].email << '\n';
    return 0;
}
