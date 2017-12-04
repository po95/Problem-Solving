#include<stdio.h>
#include<math.h>


int main()

{
    int i,r;
    int n,d;
    int sum;

    while(1==scanf("%d",&n))
    {
        if(n==0) break;

        while(n>=10)
        {
            sum=0;
            r=n;
            for(i=1000000000; i>=1; i/=10)
            {
                if(r>=i){d=r/i;
                r=r%i;
                sum+=d;
                }
            }
            n=sum;
        }
        printf("%d\n",n);
    }

    return 0;
}
