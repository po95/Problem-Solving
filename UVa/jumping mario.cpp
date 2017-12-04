//accepted

#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int curr,pre,now;
        int hi=0,lo=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&curr);
            if(i==1)
            {
                pre=curr;
                continue;
            }

            if(curr>pre)
            {
                pre=curr;
                hi++;
            }
            else if(curr<pre)
            {
                pre=curr;
                lo++;
            }
        }
        printf("Case %d: %d %d\n",++k,hi,lo);
    }


    return 0;
}
