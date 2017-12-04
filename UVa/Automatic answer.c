#include<stdio.h>

int main()

{
    int n,i;
    long int a,b,c;
    int r[110];
    int remain[10];
    int k,j,d;


    while(1==scanf("%d",&n)){
        for(i=0; i<n; i++){
            scanf("%d",&a);
            b=((((((a*567)/9)+7492)*235)/47)-498);
            for(k=1000000,j=6; k>=1; k=k/10,j--){
                d=b/k;
                c=b%k;
                remain[j]=d;
                b=c;

            }
            r[i]=remain[1];

        }
        for(i=0; i<n; i++){
            printf("%d\n",r[i]);
        }

    }
    return 0;
}
