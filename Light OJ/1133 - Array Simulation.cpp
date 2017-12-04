#include<bits/stdc++.h>
using namespace std;

int main()


{
    //freopen("array simulation.txt","r",stdin);
    int t,n,m;
    int ara[110];

    while(1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {

            scanf("%d%d",&n,&m);
            for(int i=0; i<n; i++)
            {
                scanf("%d",&ara[i]);
            }

            for(int i=0; i<m; i++)
            {
                int c,x,y;
                char s,o;

                scanf(" %c",&s);
                if(s=='S')
                {
                    scanf("%d",&c);
                    for(int i=0; i<n; i++)
                    {
                        ara[i]+=c;
                    }
                }
                else if(s=='M')
                {
                    scanf("%d",&c);
                    for(int i=0; i<n; i++)
                    {
                        ara[i]*=c;
                    }
                }
                else if(s=='D')
                {
                    scanf("%d",&c);
                    for(int i=0; i<n; i++)
                    {
                        ara[i]/=c;
                    }
                }
                else if(s=='R')
                {
                    if(n%2!=0)
                    {
                        for(int i=0,j=n-1; i<n/2; i++,j--)
                        {
                            swap(ara[i],ara[j]);
                        }
                    }
                    else if(n%2==0)
                    {
                        for(int i=0,j=n-1; i<n/2; i++,j--)
                        {
                            swap(ara[i],ara[j]);
                        }
                    }
                }
                else if(s=='P')
                {
                    scanf("%d%d",&x,&y);
                    swap(ara[x],ara[y]);
                }

            }
            printf("Case %d:\n",++k);
            for(int i=0; i<n; i++)
            {
                printf("%d",ara[i]);
                if(i!=n-1) printf("%c",32);
            }
            printf("\n");

        }
    }

    return 0;
}
