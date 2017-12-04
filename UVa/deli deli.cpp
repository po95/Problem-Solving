//accepted
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("delideli.txt","r",stdin);

    char s[30];
    int m,n;

    map<string,int>mymap;
    int assign=0;

    char regu[25][25],plu[25],single[25];

    scanf("%d%d",&m,&n);
    int j,w;
    getchar();
    while(m--)
    {
        gets(s);

        int l=strlen(s);
        j=0;
        w=0;

        for(int i=0; i<l; i++)
        {
            if(s[i]==32)
            {
                i++;
                while(i<l)
                {
                    plu[j++]=s[i];
                    i++;
                }
                plu[j]='\0';
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                while(s[i]>='a' && s[i]<='z')
                {
                    single[w++]=s[i];
                    i++;
                }
                i--;
                single[w]='\0';
            }
        }
        if(mymap[single]==0)
        {
            mymap[single]=++assign;
            strcpy(regu[assign],plu);
        }
    }
    while(n--)
    {
        scanf("%s",s);

        if(mymap[s]!=0)
        {
            printf("%s\n",regu[mymap[s]]);
            continue;
        }

        int l=strlen(s);

        if(s[l-1]=='y' && (s[l-2]!='a' && s[l-2]!='e' &&s[l-2]!='i' &&s[l-2]!='o' &&s[l-2]!='u'))
        {
            for(int i=0; i<l-1; i++)
            {
                printf("%c",s[i]);
            }
            printf("ies\n");
        }
        else if(s[l-1]=='o' || s[l-1]=='s' || (s[l-2]=='c'&&s[l-1]=='h') || (s[l-2]=='s'&&s[l-1]=='h') || s[l-1]=='x')
        {
            for(int i=0; i<l; i++)
            {
                printf("%c",s[i]);
            }
            printf("es\n");
        }
        else
        {
            for(int i=0; i<l; i++)
            {
                printf("%c",s[i]);
            }
            printf("s\n");
        }
    }

    return 0;
}
