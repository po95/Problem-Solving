#include<bits/stdc++.h>
using namespace std;

int dp[6][7500];
int coin[]={1,2,5};


int coin_cc(int i,int amount)
{
    if(i>=3)
    {
        if(amount==0) return 1;
        else return 0;
    }

    if(dp[i][amount]!=-1) return dp[i][amount];

    int ret1=0,ret2=0;

    if(amount-coin[i]>=0) ret1=coin_cc(i,amount-coin[i]);
    ret2=coin_cc(i+1,amount);


    return dp[i][amount]=ret1+ret2;

}


int main()
{
    int target;
    memset(dp,-1,sizeof(dp));
    while(1==scanf("%d",&target))
    {
        int c;
        c=coin_cc(0,target);
        printf("%d\n",c);
    }
    return 0;
}
