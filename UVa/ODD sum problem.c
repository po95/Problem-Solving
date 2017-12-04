#include<stdio.h>
int main()

{

    int i,n,j,s,k;
    int n1[101],n2[101],r[101];

    while(scanf("%d",&n)==1){
        for(i=0;i<n;i++){
                scanf("%d",&n1[i]);
                scanf("%d",&n2[i]);
                if(n1[i]<n2[i]){
                    n1[i]=n1[i];
                    n2[i]=n2[i];
                }
                else if(n1[i]>n2[i]){
                    n1[i]=n1[i]+n2[i];
                    n2[i]=n1[i]-n2[i];
                    n1[i]=n1[i]-n2[i];

                }
                else n1[i]=n2[i];
                for(j=n1[i],s=0;j<=n2[i];j=j+2){
                    if(j%2==0){
                        j=j-1;
                    }
                    else s=s+j;
                }
                r[i]=s;

        }
        for(j=1;j<=n;j++){
            printf("Case %d: %d\n",j,r[j-1]);
        }
    }
    return 0;

}
