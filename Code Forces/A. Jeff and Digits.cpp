#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);

    int cf=0,cz=0;

    for(int i=1; i<=n; i++)
    {
        int x;

        scanf("%d",&x);

        if(x==5) cf++;

        if(x==0) cz++;
    }

    if(cz>0)
    {
        if((cf/9)>0)
        {
            int r=cf/9;

            for(int i=1; i<=r; i++)
            {
                for(int j=1; j<=9; j++)
                {
                    printf("5");
                }
            }
            for(int i=1; i<=cz; i++)
            {
                printf("0");
            }
            printf("\n");
        }
        else printf("0\n");

    }
    else printf("-1\n");

    return 0;
}
