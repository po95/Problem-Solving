#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char s[110],lis[110],cas[110];

    gets(s);

    int l=strlen(s),lit=0,cap=0;

    int i;
    for(i=0; i<l; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            lit++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            cap++;
        }
        lis[i]=tolower(s[i]);
        cas[i]=toupper(s[i]);
    }
    lis[i]='\0';
    cas[i]='\0';
    if(lit>=cap)
    {
       printf("%s\n",lis);
    }
    else printf("%s\n",cas);


    return 0;
}
