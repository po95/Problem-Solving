#include<stdio.h>

int main()
{
    long long int n;
    int t,a,b;
    int i;

    scanf("%d",&t);
        for(i=0; i<t; i++)
        {
            scanf("%d %d",&a,&b);
            n=a*b;
            printf("%lli\n",n);
        }
    return 0;
}
