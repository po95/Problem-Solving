#include<bits/stdc++.h>
using namespace std;

int main()

{

    char s[5000];
    int big[30],small[30];
    while(gets(s))
    {
        memset(big,0,sizeof(big));
        memset(small,0,sizeof(small));


        int l=strlen(s);
        int m=0;

        for(int i=0; i<l; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                small[s[i]-'a']++;
                if(small[s[i]-'a']>m)
                {
                    m=small[s[i]-'a'];
                }
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                big[s[i]-'A']++;
                if(big[s[i]-'A']>m)
                {
                    m=big[s[i]-'A'];
                }
            }
        }

        for(int i=0; i<26; i++)
        {
            if(big[i]==m)
            {
                printf("%c",'A'+i);
            }
        }

        for(int i=0; i<26; i++)
        {
            if(small[i]==m)
            {
                printf("%c",'a'+i);
            }
        }

        printf(" %d\n",m);
       // getchar();

    }

    return 0;
}
