#include<stdio.h>
int main()


{
    int n,e,i,r,f,c,result[20];

    while(1==scanf("%d",&n)){
        for(i=1; i<=n; i++){
                int ct=0;
            scanf("%d %d %d",&e,&f,&c);
            r=e+f;
            while(r>c || r==c){
                r=r-c+1;
                ct++;
                if(r<c)break;
            }
            result[i-1]=ct;
        }
        for(i=0; i<n; i++){
            printf("%d\n",result[i]);
        }
    }

    return 0;
}
