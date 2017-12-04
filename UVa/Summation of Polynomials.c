#include<stdio.h>

int main()

{
    long long int r;
    long long int i;

    while(1==scanf("%lli",&i))
    {
        r=(i*(i+1))/2;
        printf("%lli\n",r*r);
    }

    return 0;

}
