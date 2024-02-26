#include <iostream>

using namespace std;

char v[5];

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        for(int i=1;i<=3;i++)
        {
            cin>>v[1]>>v[2]>>v[3];
            if(v[1]=='?')
            {
                if((v[2]=='A'&&v[3]=='B')||(v[3]=='A'&&v[2]=='B'))
                    cout<<'C'<<'\n';
                else if((v[2]=='A'&&v[3]=='C')||(v[3]=='A'&&v[2]=='C'))
                    cout<<'B'<<'\n';
                else if((v[2]=='B'&&v[3]=='C')||(v[3]=='B'&&v[2]=='C'))
                    cout<<'A'<<'\n';
            }
            else if(v[2]=='?')
            {
                if((v[1]=='A'&&v[3]=='B')||(v[3]=='A'&&v[1]=='B'))
                    cout<<'C'<<'\n';
                else if((v[1]=='A'&&v[3]=='C')||(v[3]=='A'&&v[1]=='C'))
                    cout<<'B'<<'\n';
                else if((v[1]=='B'&&v[3]=='C')||(v[3]=='B'&&v[1]=='C'))
                    cout<<'A'<<'\n';
            }
            else if(v[3]=='?')
            {
                if((v[1]=='A'&&v[2]=='B')||(v[2]=='A'&&v[1]=='B'))
                    cout<<'C'<<'\n';
                else if((v[1]=='A'&&v[2]=='C')||(v[2]=='A'&&v[1]=='C'))
                    cout<<'B'<<'\n';
                else if((v[1]=='B'&&v[2]=='C')||(v[2]=='B'&&v[1]=='C'))
                    cout<<'A'<<'\n';
            }
        }
    }
    return 0;
}
