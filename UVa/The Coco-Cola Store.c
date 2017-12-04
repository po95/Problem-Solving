#include<stdio.h>
int main()

{
    int n,d,sum,t;

    while(1==scanf("%d",&n)){
            sum=0;
        if(n==0) break;

        else if(n>=3){
            while(n>=3){
                d=n/3;
                n=d+n%3;
                sum+=d;
            }
            if(n==2) sum++;
        }
        else if(n==2) sum=1;
      printf("%d\n",sum);
    }

    return 0;
}
