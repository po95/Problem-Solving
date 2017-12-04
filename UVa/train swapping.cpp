#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,k,l,m=0;
    int ara[1010];
    int t,n;
    while(1==scanf("%d",&n))
    {
        m=0;
        while(m<n)
        {
            scanf("%d",&k);
            int c=0;
            for(i=0; i<k; i++)
            {
                scanf("%d",&ara[i]);
            }
            for(i=1; i<k; i++)
            {
                if(ara[i]<ara[i-1])
                {
                    for(j=i; j>0; j--)
                    {
                        if(ara[j]>ara[j-1] || ara[j]==ara[j-1])
                        {
                            break;
                        }

                        t=ara[j];
                        ara[j]=ara[j-1];
                        ara[j-1]=t;
                        c++;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",c);
            m++;
        }

    }
    return 0;
}
