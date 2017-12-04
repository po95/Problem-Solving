#include<stdio.h>
#include<math.h>

int prime(int a)
{
    int i,j,r;
    if(a==1 || a==2){
        return 1;
    }
    if(a%2==0){
        return 0;
    }
    r=sqrt(a);
    for(i=3; i<=r; i+=2){
        if(a%i==0){
            return 0;
        }
    }
    return 1;

}
int main()

{
    int i,c,j,k,l;
    int n,p[1020];
    int m;

    while(2==scanf("%d %d",&n,&c)){
          j=0;
                for(i=1; i<=n; i++){
                    if(prime(i)==1){
                        p[j]=i;
                        j++;
                    }
                }

                if(c*2>=j){
                            printf("%d %d:",n,c);
                        for(i=0; i<j;i++){
                            printf(" %d",p[i]);
                        }
                    printf("\n");
                    }

                else if(j%2==0){
                    m=j/2;

                    if(c*2<j){
                        printf("%d %d:",n,c);
                        for(k=m-c; k<=m-1; k++){
                            printf(" %d",p[k]);
                        }
                        for(k=m; k<(m+c); k++){
                            printf(" %d",p[k]);
                        }
                        printf("\n");
                    }

                }
                else if(j%2!=0){
                        m=j/2;
                        printf("%d %d:",n,c);
                        for(k=m-(c-1); k<=m; k++){
                            printf(" %d",p[k]);
                        }
                        for(k=m+1; k<=(m+(c-1)); k++){
                            printf(" %d",p[k]);
                        }
                        printf("\n");

                }
                printf("\n");
          }

          return 0;

}
