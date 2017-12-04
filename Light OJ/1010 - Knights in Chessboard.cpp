#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        int m,n;

        scanf("%d%d",&m,&n);

        if(m==1 || n==1)
        {
            printf("Case %d: %d\n",++k,m*n);
        }
        else if(m==2 || n==2 )
        {
            int r;

            if(m==2) r=n;

            else if(n==2) r=m;

            if(r%4==1 || r%4==3) r=r+1;

            else if(r%4==2) r+=2;

            printf("Case %d: %d\n",++k,r);
        }
        else
        {
            int r=m*n;
            printf("Case %d: %d\n",++k,(int)ceil((double)r/2.0));
        }
    }


    return 0;
}
