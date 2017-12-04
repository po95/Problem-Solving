#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,k,l;
    int n;
    char in[500],out[500];

    while(1==scanf("%d",&n)){
        if(n==0) break;
         scanf("%s",&in);
        l=strlen(in);
        j=-1;
        k=0;
        for(i=0; i<l; i++){
            for(j=j+n; j>=k; j--){

                out[j]=in[i];
                i++;
            }
            j=i-1;
            k=i;
            i--;
        }
        out[l]='\0';

        printf("%s\n",out);

    }
    return 0;
}
