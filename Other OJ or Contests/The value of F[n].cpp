#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int dp[100000050];

int call(int n)
{
    if(n==0) return a%9901;
    if(n==1) return b%9901;
    if(n==2) return c%9901;

    if(dp[n]!=-1) return dp[n];

    dp[n]=(call(n-1)+2*call(n-2)+3*call(n-3))%9901;

    return dp[n];
}

int main()

{
    unsigned int t;
    scanf("%u",&t);

    while(t--)
    {
        int n;
        scanf("%d%d%d%d",&a,&b,&c,&n);

        memset(dp,-1,sizeof(dp));
        int l;
        l=call(n);

        printf("%d\n",l);
    }


    return 0;
}
