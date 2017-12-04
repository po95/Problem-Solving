#include<stdio.h>
int main()

{
    int n,i,j,k,l;
    int a,f;
    while(1==scanf("%d",&n)){

    for(i=1; i<=n; i++){
            if(i>=2){printf("\n");}
       scanf("%d",&a);
       scanf("%d",&f);
       for(j=1; j<=f; j++){


            for(k=1; k<=a; k++){
                for(l=1; l<=k; l++){
                    printf("%d",k);
                }
                printf("\n");
            }
            for(k=a-1; k>=1; k--){
                for(l=1; l<=k; l++){
                    printf("%d",k);
                }
                printf("\n");
            }
            if(j!=f)printf("\n");
       }
    }
    }
    return 0;
}
