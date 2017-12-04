#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);
    int k=0;
    while(t--)
    {
        int n,p,q;
        scanf("%d%d%d",&n,&p,&q);

        int c=0,w=0;
        int count=0;
        for(int i=1; i<=n; i++)
        {
            int x;
            scanf("%d",&x);
            if((c+1)<=p && (w+x)<=q)
            {
                count++;
                c++;
                w+=x;
            }
        }
        printf("Case %d: %d\n",++k,count);

    }
    return 0;
}
