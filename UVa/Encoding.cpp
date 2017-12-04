#include<bits/stdc++.h>
using namespace std;

int main()

{


    char s[110],r[110];
    int trace_letter[30];

    int k=0;
    while(1==scanf("%s",s))
    {
        getchar();
        strcpy(r,s);
        for(int i=0; i<26; i++)
        {
            char ch;
            ch=getchar();
            getchar();

            trace_letter[i]=ch-97;

        }

       int l=strlen(s);

        for(int i=0; i<l; i++)
        {
            s[i]=97+trace_letter[s[i]-97];
        }

        int n;

        scanf("%d",&n);
        char x,y,ch,ch1;
        int p;

       // printf("%d",n);
        while(n--)
        {
            scanf("%d%c",&p,&ch);
            scanf("%c%c%c",&x,&ch1,&y);
            getchar();

            if(r[p]==x) s[p]=y;
            printf("%s\n",s);

        }

        printf("Case #%d: The encoded string is %s.\n",++k,s);

        printf("\n");

        getchar();

    }


    return 0;
}
