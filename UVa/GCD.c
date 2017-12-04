#include<stdio.h>
int gcd(int a,int b)
{
    int c;
    while(b!=0){
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}

int main()

{
    int i,a,b,j;
    int n;
    int sum;

    while(1==scanf("%d",&n)){
        if(n==0)break;

        sum=0;
        for(i=1; i<n; i++){
            for(j=i+1; j<=n; j++){
                sum+=gcd(i,j);
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
