#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[110];
    char hell[6]={'h','e','l','l','o'};
    while(1==scanf("%s",s))
    {
        int l=strlen(s);
        int j=0;

        for(int i=0; i<l; i++)
        {
            if(s[i]==hell[j])
            {
                j++;
                if(j==5) break;
            }
        }
        if(j==5) printf("YES\n");
        else printf("NO\n");
    }


    return 0;
}

