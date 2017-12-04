#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[110];

    while(1==scanf("%s",s))
    {
        int l=strlen(s);

        for(int i=0; i<l; i++)
        {
            if(s[i]=='a'||s[i]=='A'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
                continue;
            else
            {
                printf(".");
                if(s[i]>='B' && s[i]<='D'|| s[i]>='F' && s[i]<='H'||s[i]>='J' && s[i]<='N'||s[i]>='P' && s[i]<='T'||s[i]>='V' && s[i]<='Z')
                    printf("%c",s[i]+32);

                else printf("%c",s[i]);
            }
        }
        printf("\n");

    }


    return 0;
}

