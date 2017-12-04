#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,l,f,b;
    char num[5000];
    int n[5000];

    while(gets(num)){
        if(strcmp(num,"0")==0) break;
        f=0;
        b=0;

        l=strlen(num);

        for(i=0; i<l; i++){
            n[i]=num[i]-48;
            if(i%2==0) f+=n[i];
            else b+=n[i];
        }
        if((f-b)%11==0) printf("%s is a multiple of 11.\n",num);
        else printf("%s is not a multiple of 11.\n",num);
    }

    return 0;
}
