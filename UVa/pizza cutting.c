#include<stdio.h>

int main()



{
    int i,j,k,l;
    int d,r;

    long long int n,p;

    while(1==scanf("%lld",&n)){
        if(n<0)break;

        else if(n%2!=0){
            d=(n/2)+1;
            p=(n*d)+1;

        }
        else if(n%2==0 && n!=0){
            d=(n/2)+1;
            r=(d-2);
            p=n*d-r;
        }
        else if(n==0) p=1;

        printf("%lld\n",p);
    }

    return 0;

}
