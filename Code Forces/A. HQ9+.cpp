#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[110];

    while(gets(s))
    {
        int l=strlen(s);
        int c=0;

        for(int i=0; i<l; i++)
        {
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
            {
                c=1;
                break;
            }
        }
        if(c==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
