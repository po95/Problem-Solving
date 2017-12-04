#include<stdio.h>
#include<math.h>

int main()

{
    int i=0;
    int m,n;
    long long a,b,c;
    long long gcd,lcm,t;

    while(1==scanf("%d",&t)){
        i=0;
        while(i<t){
            scanf("%lld %lld",&a,&b);

            m=a;
            n=b;


            while(b!=0){
                c=b;
                b=a%b;
                a=c;
            }
            gcd=a;
            lcm = (m*n)/gcd;

            if(gcd==m && lcm==n) printf("%lld %lld\n",m,n);

            else printf("-1\n");

            i++;
        }
    }


    return 0;
}
