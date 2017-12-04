#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[110];

    unsigned int t;

    scanf("%u",&t);

    while(t--)
    {
        scanf("%s",s);
        int l=strlen(s);


        if(l<=10) printf("%s\n",s);

        else
        {
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
        }
    }



    return 0;
}

