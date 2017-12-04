#include<stdio.h>
#include<string.h>

long long int rev(long long int r)
{
    long long int k,j=1,d,p=0;
    for(k=1000000000; k>=1; k=k/10){
        if(r>=k){
            while(k>=1){
                d=r/k;
                r=r%k;
                p+=(d*j);
                j*=10;
                k=k/10;
            }
    }
    }
    return p;
}
int main()
{
    long long int i,j,k,l;
    long long int n,r,p,palin;
    long long int s;

    while(1==scanf("%d",&k)){
            i=0;
            while(i<k){
                    l=0;
                scanf("%lli",&r);
                p=rev(r);
                if(p==r){
                    s=l;
                    palin=r;
                }
                else if(p!=r){
                   while(p!=r){
                    l++;
                    r=r+p;
                    p=rev(r);
                    if(p==r) {break;}
                    else if(l>1000 || r>4294967295 && p>4294967295)break;

                   }
                   s=l;
                   palin=r;
                }
                printf("%lli %lli\n",s,palin);

                i++;
            }

    }

    return 0;
}
