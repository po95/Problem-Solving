#include<bits/stdc++.h>
using namespace std;


int main()
{
    char s[110];

    while(1==scanf("%s",s))
    {
        int l=strlen(s);
        int ft=0,allt=0;

        for(int i=0; i<l; i++)
        {
            if(s[0]>='a'&&s[0]<='z') ft=1;

            if(s[i]>='A' && s[i]<='Z')
            {
                allt++;
            }
        }
        if(ft==1 && allt==(l-1))
        {
            for(int i=0; i<l; i++)
            {
                if(i==0)
                {
                    printf("%c",s[i]-32);
                    continue;
                }
                printf("%c",s[i]+32);
            }
            printf("\n");
        }
        else if(ft==0 && allt==l)
        {
            for(int i=0; i<l; i++)
            {
                printf("%c",s[i]+32);
            }
            printf("\n");
        }
        else printf("%s\n",s);

    }


    return 0;
}
