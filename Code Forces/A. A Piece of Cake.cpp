#include<stdio.h>

int main()

{

    long long n;
    scanf("%lld",&n);
    while(n--)
    {
        long long i,t;
        scanf("%lld",&t);

        if(t>=0)
        {
            for(i=0; i<=t; i++)
            {
                printf("%lld",i);
                if(i!=t) printf("%c",32);
            }
        }
        else if(t<0)
        {
            for(i=t; i<=0; i++)
            {
                printf("%lld",i);
                if(i!=0) printf("%c",32);
            }
        }

        printf("\n");


    }
    return 0;
}


