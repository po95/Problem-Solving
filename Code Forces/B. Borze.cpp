#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[210];

    gets(s);

    int l=strlen(s);

    for(int i=0; i<l; i++)
    {
        if(s[i]=='.')
        {
            printf("0");
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                printf("1");
                i++;
            }
            else if(s[i+1]=='-')
            {
                printf("2");
                i++;
            }
        }
    }
    printf("\n");

    return 0;
}
