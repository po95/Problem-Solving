#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    unsigned int t;
    int value[200];
    char s[10010];
    double sum;


    while(1==scanf("%u",&t))
    {
        while(t--)
        {
            memset(value,0,sizeof(value));
            unsigned int n;
            scanf("%u",&n);
            char ch;
            int v,r;
            while(n--)
            {
                scanf("%c %d",&ch,&v);
                r=ch;
                value[r]=v;
            }
            unsigned int m;
            int i,l;
            scanf("%u",&m);
            sum=0;
            getchar();
            while(m--)
            {
                //getchar();
                gets(s);
                //scanf(" %[^\n]",s);
                l=strlen(s);
                for(i=0; i<l; i++)
                {
                    int r=s[i];
                    sum+=(0.01*value[r]);
                }
            }
            printf("%0.2lf$\n",sum);
        }
    }


    return 0;
}
