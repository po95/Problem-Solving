#include<bits/stdc++.h>
using namespace std;
int coin[5]={5,8,11,15,18};
int dp[6][20];
int make;

int call(int i,int amount)
{
    if(i>=5)
    {
        if(amount==make) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];

    int ret1=0,ret2=0;

    if(coin[i]+amount<=make) ret1=call(i,amount+coin[i]);

    ret2=call(i+1,amount);

    dp[i][amount]=ret1+ret2;

    return dp[i][amount];
}


int main()

{
    while(1==scanf("%d",&make))
    {
        memset(dp,-1,sizeof(dp));
        int c=call(0,0);
        printf("%d\n",c);
    }


    return 0;

}

