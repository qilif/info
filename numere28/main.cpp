#include <iostream>

using namespace std;

int main()
{
    int n, c, m, i = 0, a = 0, b = 0, e, mm, mu = 0, de = 0;

    cin >> n >> c;

    if (c==1)
    {
        while (n)
        {
            cin >> m;
            mm = m;
            while (m)
            {
                e=b;
                b=a;
                a=m%10;
                if (b<a && b<e)
                {
                    i++;
                    break;
                }
                if (b>a && b>e)
                {
                    break;
                }
                m/=10;
            }
            while (m)
            {
                e=b;
                b=a;
                a=m%10;
                if (b<a && b>e)
                {
                    i++;
                    break;
                }
                m/=10;
            }
            if (i==0)
            {
                mu++;
            }
            m=mm;
            i=0;
            while(m)
            {
                if(a>m%10)
                {
                    i++;
                    break;
                }
                a=m%10;
                m/=10;
            }
            if (i==0)
            {
                de++;
            }
            n--;
        }
        cout << mu << ' '<<de;
    }

    return 0;
}
