#include<bits/stdc++.h>
using namespace std;

int dp[6][7500];
int coin[6];
int taken[6];
int n;
//int target;
int coin_cc(int i,int take,int amount)
{
    if(i>=n)
    {

        if(amount==0)
        {
            printf("Hakka\n");
            return 1;
        }
        else return 0;
    }

    if(dp[i][amount]!=-1) return dp[i][amount];

    int ret1=0,ret2=0;

    if(amount-coin[i]>=0 && (take+1)<=taken[i])
    {
        printf("loop 1: ");
        printf("%d%d%d\n",i,take,amount);
        ret1=coin_cc(i,take+1,amount-coin[i]);
    }
    printf("loop 2:");
    printf("%dp.take=%d%d%d\n",i+1,take,0,amount);
    ret2=coin_cc(i+1,0,amount);


    return dp[i][amount]=ret1+ret2;

}


int main()
{
    int target;
//    memset(dp,-1,sizeof(dp));
    while(2==scanf("%d%d",&n,&target))
    {
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<(2*n); i++)
        {
            if(i<n)
            {
                scanf("%d",&coin[i]);
                continue;
            }
            else scanf("%d",&taken[i-n]);
        }
        int c;
        c=coin_cc(0,0,target);
        printf("%d\n",c);

    }
    return 0;
}
