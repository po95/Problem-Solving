#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,m;
    char given[1000],s[1000],o[1000];

    while(gets(given)){
            if(strcmp(given,"DONE")==0) break;

        l=strlen(given);
        m=1;
        for(i=0,j=0; i<l; i++){
            if(given[i]>='A'&&given[i]<='Z' || given[i]>='a'&&given[i]<='z'){
                s[j]=given[i];
                j++;
            }
        }
        s[j]='\0';
        for(i=0,k=j-1; i<j; i++,k--){
            o[k]=s[i];
        }

        for(i=0; i<j; i++){
           if(s[i]>='A'&&s[i]<='Z'){
                if(s[i]==o[i] || s[i]==o[i]-32) m=1;
                else m=0;
           }

           else if(s[i]>='a'&&s[i]<='z'){
                if(s[i]==o[i] || s[i]==o[i]+32) m=1;
                else m=0;
           }
           if(m==0) break;
        }

        if(m==0) printf("Uh oh..\n");
        else if(m==1) printf("You won't be eaten!\n");

    }

    return 0;
}
