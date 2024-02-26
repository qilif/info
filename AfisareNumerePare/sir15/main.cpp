    #include <fstream>
    using namespace std;
    ifstream cin("sir.in");
    ofstream cout("sir.out");
    int main(){
        int c,n,x,max=0,pos,first=-1,last=-1,sum =0,cnt=0;
        cin>>c>>n;
        int v[n];
        for(int i =1;i<=n;i++){
                cin>>x;
                v[i]=x;
        }
        if(c==1){
            for(int i=n;i>0;i--){
                if(v[i]>max){max =v[i];pos=i;}
            }
            cout<<pos;
        }
        if(c==2){
            for(int i=1;i<=n;i++){
                if(v[i]>max){
                    max=v[i];
                    cout<<i<<" ";
                }
            }
        }
        if(c==3)
        {
            for(int i=1;i<=n;i++)
               if(v[i]>max)
                   max = v[i];
            for(int i =1;i<=n;i++)
            {
                if(v[i]==max&&cnt==0)
                {
                    first = i; cnt++;
                }
                else if(v[i]==max) {last = i; cnt++;}
            }
            if(last == -1) cout<<0;
            else
            {
                for(int i = first;i<=last;i++)
                    sum = sum + (max - v[i]);
                cout<<sum;
            }
        }
    }
