#include<bits/stdc++.h>
using namespace std;

int main()
{

    char s[60],a[60];

    int n,t;

    scanf("%d%d",&n,&t);

    getchar();

    gets(s);
    strcpy(a,s);


    for(int i=1; i<=t; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(s[j-1]=='B' && s[j]=='G')
            {
                swap(a[j-1],a[j]);
            }
            else continue;
        }
        strcpy(s,a);
    }

    printf("%s\n",s);

    return 0;
}
