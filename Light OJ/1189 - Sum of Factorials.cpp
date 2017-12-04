#include<bits/stdc++.h>
using namespace std;
long long dp[22];
long long fac(int n)
{
    if(n==1) return 1;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    else
    {
        dp[n]=n*fac(n-1);
        return dp[n];
    }

}

int main()
{
    long long ara[22];
    memset(dp,-1,sizeof(dp));
    for(int i=1; i<=19; i++)
    {
        ara[i]=fac(i);
    }

    int t;
    scanf("%d",&t);
        int k=0;
        while(t--)
        {
            int show[22],c=0;
            long long n;
            scanf("%lld",&n);

            for(int i=19; i>=0; i--)
            {
                if(n>=ara[i])
                {
                    n=n-ara[i];
                    show[c++]=i;
                }
                if(n==0) break;
            }
            if(c>0 && n==0)
            {
                printf("Case %d: ",++k);
                for(int i=c-1; i>=0; i--)
                {
                    printf("%d!",show[i]);
                    if(i!=0) printf("+");
                }
                printf("\n");
            }
            else printf("Case %d: impossible\n",++k);

        }




    return 0;
}

