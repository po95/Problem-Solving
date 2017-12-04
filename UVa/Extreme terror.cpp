#include<bits/stdc++.h>
using namespace std;
int demand[1000000];
    int collct[1000000];
    int p[10000000];

int main()

{
    int n,t,k,i,j,l;


    while(1==scanf("%d",&n))
    {
        for(i=1; i<=n; i++)
        {
            int b=0,c,m;
            long long sum=0;

            scanf("%d%d",&m,&t);

            for(j=0; j<m; j++)
            {
                scanf("%d",&demand[j]);
            }
            for(j=0; j<m; j++)
            {
                scanf("%d",&collct[j]);
                p[j]=collct[j]-demand[j];

            }
            sort(p,p+m);


            for(j=0; j<m; j++)
            {
                if(j<t && j<m && p[j]<0) continue;
                sum+=p[j];
            }


            if(sum>0) printf("Case %d: %lld\n",i,sum);
            else printf("Case %d: No Profit\n",i);
        }
    }

    return 0;
}
