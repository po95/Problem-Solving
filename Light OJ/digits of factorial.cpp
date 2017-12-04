#include<bits/stdc++.h>
using namespace std;

double ara[1000000];
int main()

{
    int t;
    double sum=0;
    for(int i=1; i<=1000000; i++)
    {
        sum+=log(i);
        ara[i]=sum;
    }
    while(1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {
            int n,base;
            scanf("%d%d",&n,&base);
            printf("Case %d: %d\n",++k,(int)(ara[n]/log(base))+1);
        }
    }


    return 0;
}
