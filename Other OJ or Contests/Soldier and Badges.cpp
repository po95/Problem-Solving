#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;

    int ara[3010],trace[6050];

    scanf("%d",&n);

        int sum=0;

        memset(trace,0,sizeof(trace));

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);

            if(trace[ara[i]]==0) trace[ara[i]]=1;

        }

        sort(ara+1,ara+n+1);

        for(int i=1; i<=n; i++)
        {

            if(trace[ara[i]]==1) trace[ara[i]]=-1;

            else if(trace[ara[i]]==-1)
            {
                for(int j=ara[i]+1; j<=2*n; j++)
                {
                    if(trace[j]==0)
                    {
                        trace[j]=-1;

                        sum+=(j-ara[i]);

                        break;
                    }

                }

            }

        }
        printf("%d\n",sum);



    return 0;
}
