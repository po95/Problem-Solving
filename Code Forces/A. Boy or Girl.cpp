
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[110];
    int tp[26];

    while(1==scanf("%s",s))
    {
        memset(tp,-1,sizeof(tp));
        int l=strlen(s);
        int c=0;
        for(int i=0; i<l; i++)
        {
            if(tp[s[i]-97]==-1)
            {
                tp[s[i]-97]=1;
                c++;
            }
        }
        if(c%2==1) printf("IGNORE HIM!\n");
        else printf("CHAT WITH HER!\n");

    }


    return 0;
}
