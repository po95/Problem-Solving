#include<bits/stdc++.h>
using namespace std;

int main()

{
    int trace[100010],ara[100010];

    int sum[100010];


    int n;
    memset(trace,0,sizeof(trace));

    scanf("%d",&n);


    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);

        if(ara[i]<=n && trace[ara[i]]==0)
        {
            trace[ara[i]]=1;
        }
    }
    sum[0]=0;
    for(int i=1; i<=n; i++)
    {
        if(trace[i]==1) sum[i]=sum[i-1]+1;

        else sum[i]=sum[i-1];
    }
    /* for(int i=1; i<=n; i++)
     {
         printf("%d",trace[i]);
     }*/
    int u,d,j;

    for(int i=1; i<=n; i++)
    {
        int d1=0,u1=0;
        if(trace[ara[i]]==1) trace[ara[i]]=-1;

        else  if(trace[ara[i]]!=1 && ara[i]<=n)
        {

            if(sum[n]<n)
            {

                for(j=ara[i]; j<=n; j++)
                {

                    if(trace[j]==0)
                    {
                        u1=1;

                        u=j;

                        break;
                    }
                }
            }

            if(sum[ara[i]]<ara[i])
            {
                for(j=ara[i]; j>=1; j--)
                {

                    if(trace[j]==0)
                    {
                        d1=1;

                        d=j;

                        break;
                    }
                }
            }
            if(d1==1&&u1==1)
            {
                int x1=(int)fabs(ara[i]-u);

                int x2=(int)fabs(ara[i]-d);

                if(x1<=x2)
                {
                    ara[i]=u;

                    trace[u]=-1;
                    sum[u]=sum[u-1]+1;
                }
                else
                {
                    ara[i]=d;

                    trace[d]=-1;

                    sum[d]=sum[d-1]+1;
                }

            }
            else if(d1==1&&u1==0)
            {
                ara[i]=d;

                trace[d]=-1;

                sum[d]=sum[d-1]+1;
            }
            else if(d1==0&&u1==1)
            {
                ara[i]=u;

                trace[u]=-1;

                sum[u]=sum[u-1]+1;
            }


        }
        else if(ara[i]>n)
        {
            for(j=n; j>=1; j--)
            {
                if(trace[j]==0)
                {
                    d1=1;

                    d=j;

                    break;
                }
            }
            if(d1==1)
            {
                ara[i]=d;

                trace[d]=-1;

                sum[d]=sum[d-1]+1;
            }

        }
        printf("%d",ara[i]);

        if(i!=n) printf("%c",32);
    }
    printf("\n");



    return 0;
}
