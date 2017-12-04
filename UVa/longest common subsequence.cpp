#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ara[1100],s[1100];

    int i,j,k;
    while((1==scanf(" %[^\n]",ara))&&(1==scanf(" %[^\n]",s)))
    {
        int l1,l2;
        l1=strlen(ara);
        l2=strlen(s);

        int c=0;
        for(i=0; i<l1; i++)
        {
            for(j=0; j<l2; j++)
            {
                if(ara[i]!=32&&(ara[i]==s[j]))
                {
                    c++;
                    for(k=j+1; k<l2; k++)
                    {
                        s[k-1]=s[k];
                    }
                    l2--;
                    break;
                }
            }
        }
        printf("%d\n",c);
    }

    return 0;
}
