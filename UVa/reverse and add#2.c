#include<stdio.h>
int main()

{
    long long int i,r,j,k,l;
    long long int n,a,b;
    int c;
    int t;
    while(1==scanf("%d",&t)){
        i=0;

        while(i<t){
            scanf("%lli",&n);
            int d=-1;
            c=0;
            while(d<0){
                    r=n;
                    long long int sum=0;
                    a=1;
                    for(j=1000000000; j>=1; j=j/10){
                        if(r>=j){
                            while(j>=1){
                                k=r/j;
                                r=r%j;
                                sum=sum+(a*k);
                                j=j/10;
                                a=a*10;
                            }
                        }
                    }
                    if(sum!=n){
                        n=n+sum;
                        c++;
                        d=-1;
                    }
                    else if(n==sum) d=1;

            }
            printf("%d %lli\n",c,n);

            i++;

        }
    }
    return 0;
}
