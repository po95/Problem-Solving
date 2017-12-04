
#include<bits/stdc++.h>
using namespace std;

long long int lcm(long long int m,long long int n)
{
    long long int x=m;
    long long int y=n;
    long long int r;
    while(1)
    {
        r = m % n;

        if(r == 0)
            break;

        m = n;
        n = r;
    }
    return (x*y)/n;
}

int main()
{
    long long int n,i,j,k,l,cnt,cnt1,cnt2,a[200000],sum;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        cnt=0;

        for ( i = 1; i * i <= n; i++)
        {
            if (i * i == n)
            {
                a[cnt++]=i;
            }
            else if (n % i == 0)
            {
                a[cnt++]= i;
                a[cnt++]= n/i;

            }
        }

        cnt1=0;


        for(j=0; j<cnt; j++)
        {
            for(k=j; k<cnt; k++)
            {
                if(lcm(a[j],a[k])==n)cnt1++;
            }
        }


        printf("%lld %lld\n",n,cnt1);
    }

    return 0;

}


