#include<bits/stdc++.h>
using namespace std;

int main()


{
    int i,j,k,l,n;
    unsigned int t;
    char s[50],num[10];
    scanf("%u",&t);
    int g=0;
    while(t--)
    {
        printf("Case %d:\n",++g);
        scanf("%d",&n);
        int p=0;
        for(i=0; i<n; i++)
        {
            scanf(" %[^\n]",s);
            if(strcmp("report",s)==0)
            {
                printf("%d\n",p);
            }
            else if(strcmp("report",s)!=0)
            {
                int r;
                l=strlen(s);
                k=0;
                for(j=7; j<l; j++)
                {
                    num[k]=s[j];
                    k++;
                }
                int sum=0;
                l=1;
                for(j=k-1; j>=0; j--)
                {
                    r=num[j]-48;
                    sum+=r*l;
                    l*=10;
                }
                p=p+sum;

            }
        }
    }
    return 0;
}

