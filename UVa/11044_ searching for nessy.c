#include<stdio.h>
int main()

{
    int a,b;
    long long int c,d;
    int i,t;
    long long int m,n;

    while(1==scanf("%d",&t)){
        i=0;
        while(i<t){
                d=0;
                c=0;
             scanf("%lli %lli",&n,&m);
                d=(n-2)/3;
                if((n-2)%3>0) d++;
                c=(m-2)/3;
                if((m-2)%3>0) c++;
                c=c*d;

                printf("%lli\n",c);

            i++;
        }
    }
    return 0;
}
