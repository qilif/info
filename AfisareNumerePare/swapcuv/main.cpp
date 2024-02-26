/*#include <iostream>

using namespace std;

string v[255];

int main()
{
    int i=1;
    char c;
    while(cin.eof()==false)
    {
        cin.get(c);
        if(c=='\n')
            break;
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
            v[i]+=c;
        else if(v[i]!="")
            i++;
    }
    if(v[i]=="")
        i--;
    for(int j=1;j<=i;j++)
    {
        cout<<v[j]<<'\n';
        if(i==j)
            break;
        cout<<v[i]<<'\n';
        i--;
    }
    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
    int s=0,nr=0;
    char c;
    while(cin.eof()==false)
    {
        cin.get(c);
        if(c=='\n')
            break;
        if(c>='0'&&c<='9')
            nr=nr*10+c-'0';
        else if(nr)
        {
            s+=nr;
            nr=0;
        }
    }
    cout<<s;
    return 0;
}
