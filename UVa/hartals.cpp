#include<bits/stdc++.h>
using namespace std;

int ara[3700];
int main()

{

    int i,j,k,l,x;

    unsigned int u,t;
    int n;
    while(1==scanf("%u",&u))
    {
        while(u--)
        {
            memset(ara,0,sizeof(ara));
            scanf("%d",&n);
            for(i=6; i<=n; i+=7)
            {
                ara[i]=-1;
                ara[i+1]=-1;
            }
            scanf("%u",&t);
            int c=0;
            while(t--)
            {
                int x;
                scanf("%d",&x);
                for(i=x; i<=n; i+=x)
                    {
                        if(ara[i]==0)
                            {
                                c++;
                                ara[i]=-1;
                            }
                    }

            }
            printf("%d\n",c);

        }
    }


    return 0;

}
