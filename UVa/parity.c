#include<stdio.h>
int main()

{
    int i,j,k,p,n;
    int num[50];
    char bi[50];

    while(1==scanf("%d",&n)){
        if(n==0) break;
        j=0;
        p=0;

        while(n!=0){
            num[j]=n%2;
            n=n/2;
            j++;
        }
        for(i=0,k=j-1; i<j; i++,k--){
            if(num[i]==1){
                    p++;
                    bi[k]='1';
            }
            else bi[k]='0';


        }
        bi[j]='\0';
        printf("The parity of %s is %d (mod 2).\n",bi,p);


    }

    return 0;
}
