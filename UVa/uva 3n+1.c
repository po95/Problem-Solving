#include<stdio.h>
int main()
{
    int i,n,sv,ev,m=0,c;
    scanf("%d %d",&sv,&ev);
    for(i=sv;i<=ev;i++){
        n=i;
        c=0;
        while(n>=1){
            if(n==1){
                c++;
                break;
            }
            else if(n%2!= 0){
                n=(3*n+1);
                c++;
            }
            else if(n%2==0){
                n=n/2;
                c++;
            }
        }
        if(m<c){
            m=c;
        }
    }
    printf("%d %d %d\n",sv,ev,m);


    return 0;
}
