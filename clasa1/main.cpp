#include <iostream>
#include <algorithm>

using namespace std;

struct elev
{
    double media1, media2, media3, mediatotala=0;
    string nume, prenume;
};
bool cmp(elev a, elev b) //here we make a subprogram of the bool type that we will use for sorting.
{
    if(a.mediatotala!=b.mediatotala) return a.mediatotala>b.mediatotala;
    if(a.nume!=b.nume) return a.nume<b.nume;
    return a.prenume<b.prenume;
}

elev v[101];

int main()
{
    int n,c,i=0,ii=1;
    double mc=0;
    cin>>n>>c;
    while(ii<=n)
    {
        cin>>v[ii].nume>>v[ii].prenume>>v[ii].media1>>v[ii].media2>>v[ii].media3;

        mc+=v[ii].media1+v[ii].media2+v[ii].media3;         //here we calculate the total sum of the averages of all the students, so that after that we will divide it by the sum of the averages collected.

        v[ii].mediatotala=(v[ii].media1+v[ii].media2+v[ii].media3)/3;   //here we calculate the student's total average.

        ii++;
    }
    mc/=(n*3);                  //here, as I said above, we divide according to the averages gathered.

    for(ii=1;ii<=n;ii++)
        if(v[ii].mediatotala>=mc)
            i++;                            //here we will use a for to find the number of general averages greater or equal to the class average.
    if(c==1)
        cout<<i;
    else
    {
        cout<<mc<<'\n';                 //here we display the average of the class as required in the requirement and sort our vector.
        sort(v+1,v+n+1,cmp);
        for(ii=1;ii<=n;ii++)
            cout<<v[ii].nume<<' '<<v[ii].prenume<<' '<<v[ii].mediatotala<<'\n';
    }
    return 0;
}
