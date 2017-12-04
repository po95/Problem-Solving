#include<stdio.h>
#include<string.h>
#include<math.h>


int main()

{
    int i,j,l,n;
    char s[30];
    int q;

    while(gets(s)){
        l=strlen(s);
        int p;
        n=0;
        p=1;
        for(i=0; i<l; i++){
            if(s[i]>='a' && s[i]<='z'){
                n=n+(s[i]-96);
            }
            else if(s[i]>='A' && s[i]<='Z'){
                n=n+(s[i]-38);
            }
        }

        if(n!=2 && n%2==0){
                p=0;
        }
        else {
                q=sqrt(n);
            for(i=3; i<=q; i+=2){
                if(n%i==0){p=0;
                break;
                }
            }
        }

        if(p==0) printf("It is not a prime word.\n");

        else printf("It is a prime word.\n");

    }
    return 0;
}
