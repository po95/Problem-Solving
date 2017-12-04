#include<stdio.h>
int main()


{
    long int a,b,c,d,e,n;
    long int n1,n2;


    while(1==scanf("%ld",&n)){
            int i;
        for(i=0; i<n; i++){
            scanf("%ld %ld",&a,&b);

            if(b>a || ((a-b)%2)!=0){
                printf("Impossible\n");
            }
            else{
                n1=(a+b)/2;
                n2=a-n1;
                printf("%ld %ld\n",n1,n2);
            }
        }
    }
    return 0;
}
