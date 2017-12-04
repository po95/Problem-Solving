#include<bits/stdc++.h>
using namespace std;
int digits[10];
int call(int n)
{
    int j=0;
    while(n!=0)
    {
        digits[j++]=n%10;
        n=n/10;
    }
    return j;
}
int main()

{
    int n;
    char s[1010];
    int out[2005];

    char x;

    unsigned int t;
    scanf("%u",&t);
    while(t--)
    {
        getchar();
        scanf("%s",s);
        int l,c;

        l=strlen(s);
        for(int i=0; i<l; i++)
        {
            x=s[i];
            c=1;
            if(s[i]!=s[i+1])
            {
                printf("%d",c);
                printf("%d",x-'0');
            }
            else if(s[i]==s[i+1])
            {
                while(s[i]==s[i+1])
                {
                    c++;
                    i++;
                }
                int m;
                m=call(c);
                for(int k=m-1; k>=0; k--)
                {
                    printf("%d",digits[k]);
                }
                printf("%d",x-'0');

            }
        }
        printf("\n");
    }


    return 0;
}

