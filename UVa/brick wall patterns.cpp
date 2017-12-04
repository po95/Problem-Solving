#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,i;
    while(1==scanf("%d",&n))
    {
        long long sum=0;
        long long a,b;

        if(n==0) break;

        if(n>0)
        {
            a=0;
            b=1;

            for(i=1; i<=n; i++)
            {
                sum=a+b;
                a=b;
                b=sum;
            }
        }
        printf("%lld\n",sum);
    }

    return 0;
}
