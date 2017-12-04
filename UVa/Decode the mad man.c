
#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,k,l;
    char s[5000],o[5000];

    while(gets(s))
    {
        l=strlen(s);

        for(i=0,k=0; i<l; i++)
        {
            if(s[i]=='e'||s[i]=='E'){ o[k]='q'; k++;}
            else if(s[i]=='r'||s[i]=='R'){ o[k]='w'; k++;}
            else if(s[i]=='t'||s[i]=='T'){ o[k]='e'; k++;}
            else if(s[i]=='y'||s[i]=='Y'){ o[k]='r'; k++;}
            else if(s[i]=='u'||s[i]=='U'){ o[k]='t'; k++;}
            else if(s[i]=='i'||s[i]=='I'){ o[k]='y'; k++;}
            else if(s[i]=='o'||s[i]=='O'){ o[k]='u'; k++;}
            else if(s[i]=='p'||s[i]=='P'){ o[k]='i'; k++;}
            else if(s[i]=='['||s[i]=='{'){ o[k]='o'; k++;}
            else if(s[i]==']'||s[i]=='}'){ o[k]='p'; k++;}
            else if(s[i]=='d'||s[i]=='D'){ o[k]='a'; k++;}
            else if(s[i]=='f'||s[i]=='F'){ o[k]='s'; k++;}
            else if(s[i]=='g'||s[i]=='G'){ o[k]='d'; k++;}
            else if(s[i]=='h'||s[i]=='H'){ o[k]='f'; k++;}
            else if(s[i]=='j'||s[i]=='J'){ o[k]='g'; k++;}
            else if(s[i]=='k'||s[i]=='K'){ o[k]='h'; k++;}
            else if(s[i]=='L'||s[i]=='l'){ o[k]='j'; k++;}
            else if(s[i]==';'||s[i]==':'){ o[k]='k'; k++;}
            else if(s[i]==39 ||s[i]=='"'){ o[k]='l'; k++;}
            else if(s[i]=='c'||s[i]=='C'){ o[k]='z'; k++;}
            else if(s[i]=='v'||s[i]=='V'){ o[k]='x'; k++;}
            else if(s[i]=='B'||s[i]=='b'){ o[k]='c'; k++;}
            else if(s[i]=='n'||s[i]=='N'){ o[k]='v'; k++;}
            else if(s[i]=='M'||s[i]=='m'){ o[k]='b'; k++;}
            else if(s[i]=='Q'||s[i]=='q'){ o[k]='q'; k++;}
            else if(s[i]=='W'||s[i]=='w'){ o[k]='w'; k++;}
            else if(s[i]==','||s[i]=='<'){ o[k]='n'; k++;}
            else if(s[i]=='.'||s[i]=='>'){ o[k]='m'; k++;}
            else if(s[i]=='/'||s[i]=='?'){ o[k]=','; k++;}
            else if(s[i]=='2'){ o[k]='`'; k++;}
            else if(s[i]=='3'){ o[k]='1'; k++;}
            else if(s[i]=='4'){ o[k]='2'; k++;}
            else if(s[i]=='5'){ o[k]='3'; k++;}
            else if(s[i]=='6'){ o[k]='4'; k++;}
            else if(s[i]=='7'){ o[k]='5'; k++;}
            else if(s[i]=='8'){ o[k]='6'; k++;}
            else if(s[i]=='9'){ o[k]='7'; k++;}
            else if(s[i]=='0'){ o[k]='8'; k++;}
            else if(s[i]=='='){ o[k]='0'; k++;}
            else if(s[i]=='-'){ o[k]='9'; k++;}
            else if(s[i]==32){ o[k]=' '; k++;}

        }
        o[k]='\0';

        printf("%s\n",o);
    }
    return 0;
}
