#include<stdio.h>
int main()

{
    int i,n;
    long long n1[15],n2[15];

    while(scanf("%d",&n)==1){
        for(i=0;i<n;i++){
            scanf("%lld %lld",&n1[i],&n2[i]);
        }
        for(i=0;i<n;i++){
            if(n1[i]<n2[i]){
                printf("<\n");
            }
            else if(n1[i]>n2[i]){
                printf(">\n");
            }
            else printf("=\n");
        }
    }
    return 0;

}



