#include<stdio.h>
#include<math.h>

int isprime(int n)
{
    int i,j,k;

    if(n<2)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    j=sqrt(n);
    for(i=3; i<=j; i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()

{
    int i,j,k,l,m,n;
    int u;
    int prime[100000];
    int c,r;

    c=0;
    i=1;
    while(c!=100000)
    {
        r=isprime(i);
        if(r==1)
        {
            prime[c]=i;
            c++;
        }
        i++;
    }
    c=1;
    n=1;
    while(c!=1501)
    {
        if(n==1)
        {
            u=n;
            c++;
        }

        else if(n%2==0 || n%3==0 || n%5==0)
        {
            int g;
            g=1;
            for(i=3; i<100000; i++)
            {
                if(n%prime[i]==0)
                {
                    g=0;
                    break;

                }
            }
            if(g==1)
            {
                u=n;
                c++;
            }
        }
        n++;
    }
    printf("%d\n",u);

    /*for(i=0; i<1500; i++){
        printf("%3d : %d\n",i+1,prime[i]);
    }*/
    return 0;

}
