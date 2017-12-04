#include<bits/stdc++.h>
using namespace std;

int divisors[100000];
int main()

{
    int i,j,k,n,l;

    while(1==scanf("%d",&n))
    {
        if(n==0) break;
        int c=0;
        for(i=1,j=0; i*i<=n; i++)
        {
            if(i*i==n)
            {
                divisors[j++];

            }
            else if(n%i==0)
            {
                divisors[j++]=i;
                divisors[j++]=n/i;
            }
        }
        long long int o,gcd,lcm,a,b;
        for(i=0; i<j; i++)
        {
            for(k=i; k<j; k++)
            {
                a=(long long int)divisors[i];
                b=(long long int)divisors[k];

                while(b!=0)
                {
                    o=b;
                    b=a%b;
                    a=o;
                }
                gcd=a;

                lcm=((long long int)divisors[i]*(long long int)divisors[k])/gcd;
                if(lcm==n) c++;
            }
        }
        printf("%d %d\n",n,c);

    }


    return 0;
}
