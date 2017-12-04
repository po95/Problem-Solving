#include<stdio.h>
int main()

{
    int i,j,k,l;
    int n;
    long long int f[5000];


    while(1==scanf("%d",&n)){
        f[0]=0;
        f[1]=1;

        for(i=2; i<=n; i++){
            f[i]=f[i-1]+f[i-2];
        }
        printf("The Fibonacci number for %d is %lld\n",n,f[n]);
    }

    return 0;
}
