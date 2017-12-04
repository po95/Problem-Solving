#include<stdio.h>
int main()
{
    long long a,b;

    while(scanf("%lld %lld",&a,&b)!= EOF){
        if(a>b){
            a=a;
            b=b;
        }
        else if(a<b){
            a=a+b;
            b=a-b;
            a=a-b;
        }
        else a=b;
        printf("%lld\n",(a-b));
    }
    return 0;
}
