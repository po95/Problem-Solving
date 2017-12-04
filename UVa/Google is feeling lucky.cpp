#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[12][120];
    char temp[120];
    int d[12];
    int i,j,k,n,m;

    while(1==scanf("%d",&n))
    {
        i=1;
        while(i<=n)
        {
            memset(d,0,sizeof(d));

            for(k=1; k<=10; k++)
            {
                scanf("%s%d",&s[k],&d[k]);
                if(k==1)
                {
                    continue;
                }
                if(d[k]>d[k-1])
                {
                    for(j=k; j>1; j--)
                    {
                        if(d[j]>d[j-1])
                        {
                            swap(d[j],d[j-1]);
                            strcpy(temp,s[j-1]);
                            strcpy(s[j-1],s[j]);
                            strcpy(s[j],temp);
                        }
                        else break;
                    }
                }
            }
            printf("Case #%d:\n",i);
            m=d[1];
            for(j=1; j<=10; j++)
            {
                if(d[j]==m) printf("%s\n",s[j]);
                else break;
            }

            i++;
        }

    }
    return 0;
}
