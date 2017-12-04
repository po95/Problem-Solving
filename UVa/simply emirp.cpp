
#include<stdio.h>
#include<math.h>

int prime(int a);
int main()
{
    int i,j,l,n;

    while(1==scanf("%d",&n))
    {
        int r;
        int sum=0,k=1,m,d;

        r=prime(n);

        if(r==0) printf("%d is not prime.\n",n);
        else if(r==1)
        {
            d=n;
            for(i=1000000; i>=1; i/=10)
            {
                if(i<=d)
                {

                while(i>=1)
                {
                    m=d/i;
                    d=d%i;
                    sum+=(k*m);
                    k*=10;
                    i/=10;
                }
                }
            }
            if(prime(sum)==1 && sum!=n) printf("%d is emirp.\n",n);
            else printf("%d is prime.\n",n);
        }
    }

    return 0;
}
int prime(int a)

{
    int i;
    if(a<2) return 0;
    if(a==2) return 1;
    if(a%2==0) return 0;
    for(i=3; i<=sqrt(a); i+=2)
    {
        if(a%i==0) return 0;
    }

    return 1;

}


