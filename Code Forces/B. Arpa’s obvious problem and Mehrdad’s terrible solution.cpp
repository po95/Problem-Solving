#include<bits/stdc++.h>
using namespace std;

int ara[100010];

int main()
{
    int n,x;
    int c=0;

    scanf("%d%d",&n,&x);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);

        if(i==1)
        {
            continue;
        }
        else
        {
            for(int j=i-1; j>=1; j--)
            {
                if((ara[i]^ara[j])==x) c++;
            }
        }
    }

    printf("%d\n",c);

    return 0;
}
