#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,k,l;
    char s[500],o[500];
    int n,m;

    while(1==scanf("%d",&n)){
        if(n==0) break;
        getchar();

        scanf("%s",&s);
        l=strlen(s);
        k=l/n;
        j=0;
        for(i=0; i<l; i++){
                m=k+i;
                j=m-1;
            while(i<m){
                o[j]=s[i];
                j--;
                i++;

            }
        i--;
        j++;
        }
        o[l]='\0';
        printf("%s\n",o);


    }
    return 0;
}
