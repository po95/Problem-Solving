#include<bits/stdc++.h>
using namespace std;

char s[500000];

int main()

{
    while(gets(s))
    {
        int l=strlen(s);

        for(int i=0; i<l; i++)
        {
            if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
            {
                if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
                {
                    char ch=s[i];
                    while(s[i+1]>='a'&&s[i+1]<='z' || s[i+1]>='A'&&s[i+1]<='Z')
                    {
                        printf("%c",s[i+1]);
                        i++;
                    }
                    printf("%cay",ch);
                  // printf("'ak'");
                }
                else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    while(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
                    {
                        printf("%c",s[i]);
                        i++;
                    }
                    printf("ay");
                    i--;
                }
            }
            else printf("%c",s[i]);

        }
        printf("\n");
    }

    return 0;
}
