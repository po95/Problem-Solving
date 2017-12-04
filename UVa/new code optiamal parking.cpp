#include<bits/stdc++.h>
using namespace std;

int main()

{
    int ara[110];

    int i,j,k,l;

    int n;

    while(1==scanf("%d",&n))
    {
        k=0;
        while(k<n)
        {
            int t;
            int sum=0;
            scanf("%d",&t);

            for(i=0; i<t; i++)
            {
                scanf("%d",&ara[i]);
                if(i>0)
                {
                    for(j=i; j>0; j--)
                    {
                        if(ara[j]<ara[j-1])
                        {
                            swap(ara[j],ara[j-1]);
                        }
                        else if(ara[j]>ara[j-1] || ara[j]==ara[j-1]) break;
                    }
                }
            }
            for(i=1; i<t; i++)
            {
                sum=sum+(ara[i]-ara[i-1]);
            }
            printf("%d\n",sum*2);

            k++;
        }
    }
}
