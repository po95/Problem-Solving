#include<stdio.h>
#include<math.h>

int main()

{
    int i,j,k=0;
    int num[110],sum[110];
    int n;

    while(1==scanf("%d",&n)){
        if(n==0)break;
        else if(n>0){
                int root;
                int s=1;
                int r1,r2;
            //root=sqrt(n);
        for(i=2; i<=(n/2); i++){
            if(n%i==0){
                r1=i;
                r2=n/i;
                s=s+r1+r2;
            }
        }
        sum[k]=s;

        }
        num[k]=n;
        k++;
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0; i<k; i++){
        if(sum[i]==num[i]){
            printf("%5d  PERFECT\n",num[i]);
        }
        else if(sum[i]<num[i]){
            printf("%5d  DEFICIENT\n",num[i]);
        }
        else if(sum[i]>num[i]){
            printf("%5d  ABUNDANT\n",num[i]);
        }
    }
    printf("END OF OUTPUT\n");

    return 0;
}
