#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[210],y[210];

    int c=0,a,b,n;

    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d%d",&x[i],&y[i]);
    }

    for(int i=1;i<=n; i++)
    {
        int u=0, l=0,r=0,le=0;

        for(int j=1; j<=n; j++)
        {
            if(i==j) continue;

            if(x[i]==x[j])
            {
                if(y[i]<y[j]) u=1;

                if(y[i]>y[j]) l=1;
            }

            if(y[i]==y[j])
            {
                if(x[i]<x[j]) r=1;

                if(x[i]>x[j]) le=1;
            }

            if(u==1 && l==1 && r==1 && le==1)
            {
                c++;
                break;
            }
        }


    }
    printf("%d\n",c);

    return 0;
}
