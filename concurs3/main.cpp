#include <fstream>

using namespace std;
ifstream in ("concurs.in");
ofstream out ("concurs.out");
int main()
{
    long long c, n, p, e, e1 =0, e2 =0, e3 =0, sum_max=0, nr =0, s=0;

    in >> c >> n;
    if(c==1)
    {
        while (n)
        {
            in >> e >> p;
            while (p)
            {
                if(p%10==0)
                {
                    s+=10;
                    p/=100;
                }
                else
                {
                    s+=p%10;
                    p/=10;
                }
            }
            if (s>sum_max)
            {
                sum_max=s;
                nr=1;
            }
            else if(s ==sum_max)
                nr++;
            s=0;
            n--;
        }
        out << sum_max << ' ' << nr;
        return 0;
    }
    else
    {
        while (n)
        {
            in >> e >> p;
            if(e==1)
            {
                while (p)
                {
                    if(p%10==0)
                    {
                        e1+=10;
                        p/=100;
                    }
                    else
                    {
                        e1+=p%10;
                        p/=10;
                    }
                }
            }
            else if(e==2)
            {
                while (p)
                {
                    if(p%10==0)
                    {
                        e2+=10;
                        p/=100;
                    }
                    else
                    {
                        e2+=p%10;
                        p/=10;
                    }
                }
            }
            else
            {
                while (p)
                {
                    if(p%10==0)
                    {
                        e3+=10;
                        p/=100;
                    }
                    else
                    {
                        e3+=p%10;
                        p/=10;
                    }
                }
            }
            n--;

        }
        if (e1==0&&e2==0&&e3==0)
        {
            out<<"FARA CAMPION";
            return 0;
        }
        sum_max=max(max(e1, e2), e3);
        if (sum_max==e1)
        {
            out<<"1 ";
        }
        if (sum_max==e2)
        {
            out<<"2 ";
        }
        if (sum_max==e3)
        {
            out<<"3 ";
        }
        out << sum_max;
    }
    return 0;
}
