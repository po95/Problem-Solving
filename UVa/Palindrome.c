#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l;
    char s[25],w[25];

    while(gets(s)){

    l=strlen(s);

    for(i=0,j=l-1; i<l; i++,j--)
    {
        w[j]=s[i];
    }
    w[l]='\0';
    s[l]='\0';
    int p;
    p=strcmp(s,w);
    int c;


    for(i=0; i<l; i++)
    {
        if((s[i]=='A'&&w[i]=='A')||(s[i]=='E'&&w[i]=='3')||(s[i]=='H'&&w[i]=='H')||(s[i]=='I'&&w[i]=='I')||(s[i]=='J'&&w[i]=='L')||(s[i]=='L'&&w[i]=='J')||
                (s[i]=='M'&&w[i]=='M')||(s[i]=='O'&&w[i]=='O')||(s[i]=='S'&&w[i]=='2')||(s[i]=='T'&&w[i]=='T')||(s[i]=='U'&&w[i]=='U')||(s[i]=='V'&&w[i]=='V')||
                (s[i]=='W'&&w[i]=='W')||(s[i]=='X'&&w[i]=='X')||(s[i]=='Y'&&w[i]=='Y')||(s[i]=='Z'&&w[i]=='5')||(s[i]=='1'&&w[i]=='1')||(s[i]=='2'&&w[i]=='S')||
                (s[i]=='3'&&w[i]=='E')||(s[i]=='5'&&w[i]=='Z')||(s[i]=='8'&&w[i]=='8')||(s[i]=='0'&&w[i]=='O'))
        {
            c=1;
        }
        else
        {
            c=0;
            break;
        }

    }

    if(p==0 && c==1)
    {
        printf("%s -- is a mirrored palindrome.\n",s);
    }
    else if(p==0)
    {
        printf("%s -- is a regular palindrome.\n",s);
    }

    else if(c==1)
    {
        printf("%s -- is a mirrored string.\n",s);
    }
    else if(p<0 || p>0)
    {
        printf("%s -- is not a palindrome.\n",s);
    }
    printf("\n");

    }

    return 0;
}
