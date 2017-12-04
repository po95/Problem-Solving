#include<stdio.h>
#include<string.h>

int main()

{
    unsigned int a,b,k,n,sum,r1,r2;

    while(2==scanf("%u %u",&a,&b))
    {
        k=1;
        sum=0;
             while(a!=0 || b!=0)
             {
                 r1=a%2;
                 a=a/2;

                 r2=b%2;
                 b=b/2;
                 if((r1==0 && r2==1) || (r1==1 && r2==0) )
                 {

                     sum+=((r1+r2)*k);

                 }
                 k*=2;
             }
        printf("%u\n",sum);
    }
    return 0;
}

