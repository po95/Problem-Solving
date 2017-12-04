#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    while(1==scanf("%d",&n))
    {
        int i=1;
        int l,w,h;
        for(i=1; i<=n; i++)
        {
            scanf("%d%d%d",&l,&w,&h);
            if(l>20||w>20||h>20) printf("Case %d: bad\n",i);
            else printf("Case %d: good\n",i);
        }
    }

    return 0;
}
