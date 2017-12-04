#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;

    while(1==scanf("%d",&t))
    {
        int k=0;
        long long n;
        while(t--)
        {
            scanf("%lld",&n);
            if(n<=2 || n%2!=0)
            {
                printf("Case %d: Impossible\n",++k);

            }
            else
            {
                int c=0;
                for(long long i=2; i<=n/2; i++)
                {
                    long long r=i;
                    if(n%i==0 && (n/i)%2!=0)
                    {
                        c=1;
                        printf("Case %d: %lld %lld\n",++k,n/i,r);
                        break;
                    }
                }
                if(c==0) printf("Case %d: Impossible\n",++k);

            }
        }
    }

    return 0;
}
