#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    char s[60];

    while(1==scanf("%d",&n))
    {
        scanf("%s",s);
        int l=strlen(s);

        int c=0,t=0;

        for(int i=0; i<l; i++)
        {
            if(s[i]==s[i+1] && t==0)
            {
                t=1;
                continue;

            }
            if(t==1)
            {
                c++;
                if(s[i]==s[i+1]) t=1;
                else if(s[i]!=s[i+1]) t=0;
            }
        }
        printf("%d\n",c);
    }

    return 0;
}
