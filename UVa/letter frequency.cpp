#include<bits/stdc++.h>
using namespace std;

int main()


{
    unsigned int n;
    char s[210],ch;
    int c[30],print[26],l,i;

    while(1==scanf("%u",&n))
    {
        while(n--)
        {
            scanf(" %[^\n]",s);
            l=strlen(s);
            int r;
            memset(c,0,sizeof(c));
            for(i=0; i<l; i++)
            {
                if((s[i]>=65&&s[i]<=90) || (s[i]>=97&&s[i]<=122))
                {
                    ch=tolower(s[i]);
                    r=ch-97;
                    c[r]++;
                }
            }
            int m;
            m=c[0];

            for(i=0; i<26; i++)
            {
                if(c[i]>m) m=c[i];
            }
            for(i=0; i<26; i++)
            {
                if(m==c[i]) printf("%c",97+i);
            }
            printf("\n");
        }
    }


    return 0;
}
