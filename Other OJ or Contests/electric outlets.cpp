#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int n,t;
    int i,k,sum;
    while(1==scanf("%u",&n))
    {
        while(n--)
        {
            i=1;
            sum=0;
            scanf("%u",&t);
            if(t==0) sum=1;
            while(i<=t)
            {
                scanf("%d",&k);
                if(i<t) sum+=(k-1);
                else if(i==t) sum+=k;
                i++;
            }
            printf("%d\n",sum);

        }

    }

    return 0;
}
