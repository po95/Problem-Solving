#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,k,l,n,c;
    char s[5000],ch[30],t;
    int id[30],m;

    while(1==scanf("%d",&n))
    {
        for(i=0; i<30; i++)
        {
            id[i]=0;
            ch[i]='A'+i;
        }
        for(i=0; i<n; i++)
        {
            scanf(" %[^\n]",s);
            l=strlen(s);
            for(j=0; j<l; j++)
            {
                if(s[j]>='a'&&s[j]<='z')
                {
                    k=s[j]-97;
                    id[k]++;
                }
                if(s[j]>='A'&&s[j]<='Z')
                {
                    k=s[j]-65;
                    id[k]++;
                }

            }

        }
        for(i=1; i<26; i++)
        {
            if(id[i]>id[i-1])
            {
                for(j=i; j>0; j--)
                {
                    if(id[j]<id[j-1] &&id[j]==id[j-1]) break;

                    else if(id[j]>id[j-1])
                    {
                        k=id[j];
                        id[j]=id[j-1];
                        id[j-1]=k;

                        t=ch[j];
                        ch[j]=ch[j-1];
                        ch[j-1]=t;
                    }
                }
            }
        }
        for(i=0; i<26; i++)
        {
            if(id[i]!=0) printf("%c %d\n",ch[i],id[i]);
        }


    }
    return 0;
}
