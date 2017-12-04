#include<bits/stdc++.h>
using namespace std;


int main()

{
    int ara[5010],i,j,l;
    int n;

    unsigned long long int sum,r;

    while(1==scanf("%d",&n)&&(n>=2))
    {
        if(n==0) break;

        i=0;
        while(i<n)
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
                    else break;
                }
            }
            i++;
        }
        sum=0;
        unsigned long long int a=(unsigned long long int)ara[0];
        for(i=1; i<n; i++)
        {
            a=a+(unsigned long long int)ara[i];
            sum+=a;
        }
        printf("%llu\n",sum);
    }

    return 0;

}
