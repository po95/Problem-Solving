#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,k,l;
    char s[30],o[30];

    while(gets(s))
    {
        l=strlen(s);
        k=0;

        for(i=0; i<l; i++)
        {
            if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
            {
                o[k]='1';
                k++;
                while(s[i+1]=='B'||s[i+1]=='F'||s[i+1]=='P'||s[i+1]=='V')
                {
                    i++;
                }
            }
            else if (s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
            {
                o[k]='2';
                k++;
                while(s[i+1]=='C'||s[i+1]=='G'||s[i+1]=='J'||s[i+1]=='K'||s[i+1]=='Q'||s[i+1]=='S'||s[i+1]=='X'||s[i+1]=='Z')
                {
                    i++;
                }
            }
            else if(s[i]=='D'||s[i]=='T')
            {
                o[k]='3';
                k++;
                while(s[i+1]=='D'||s[i+1]=='T')
                {
                    i++;
                }
            }
            else if(s[i]=='L')
            {
                o[k]='4';
                k++;
                while(s[i+1]=='L')
                {
                    i++;
                }
            }
            else if(s[i]=='M'||s[i]=='N')
            {
                o[k]='5';
                k++;
                while(s[i+1]=='M'||s[i+1]=='N')
                {
                    i++;
                }
            }
            else if(s[i]=='R')
            {
                o[k]='6';
                k++;
                while(s[i+1]=='R')
                {
                    i++;
                }
            }

        }
        o[k]='\0';
        printf("%s\n",o);
    }
    return 0;
}
