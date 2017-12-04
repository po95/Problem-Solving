#include<stdio.h>
#include<string.h>


int main()


{
    unsigned int a,b,i,j,k,l;
    unsigned int m[10],n[10];

    while(2==scanf("%u %u",&a,&b)){
        if(a==0 && b==0) break;

        unsigned int d,r;
        for(i=100000000,j=0,k=0; i>=1; i/=10){
            if(a>=i){
               d=a/i;
               a=a%i;
               m[j]=d;
               j++;

            }
            if(b>=i){
              d=b/i;
               b=b%i;
               n[k]=d;
               k++;
            }
        }
        j--;
        k--;

        if(k>j) {
                a=k;
                b=j;
                }
        else {
            a=j;
            b=k;
        }
        for(i=a; i>=0; i--){

        }
    }
}
