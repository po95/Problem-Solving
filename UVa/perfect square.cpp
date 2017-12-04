#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    while(1==scanf("%d",&n))
    {
        for(k=1; k<=n; k++)
        {
            int x;
            scanf("%d",&x);
            int p=0;
            for(i=1,j=1; i<=x; i+=(j*2)-1)
            {
                j++;
                p++;
            }
            printf("%d\n",p);

        }
    }
    return 0;
}
