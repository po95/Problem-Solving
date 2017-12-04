#include<bits/stdc++.h>
#define M 1000003
using namespace std;

long long dp[1000010];

int main()
{
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;

    for(long long i=3; i<=1000003; i++)
    {
        dp[i]=((i%M)*dp[i-1])%M;
    }
    int t;

    scanf("%d",&t);

    int k=0;
    int n;


    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",dp[n]);

    }

    return 0;
}
