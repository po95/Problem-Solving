#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        printf("Case %d:\n",++k);

        int x1,y1,x2,y2;
        int x3,y3,x4,y4;

        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);


        int m;

        scanf("%d",&m);

        while(m--)
        {
            int x,y;

            scanf("%d%d",&x,&y);
            int c=0;

            if(x>x1 && x<x2)
            {
                if(y>y1 && y<y2)
                {
                    c=1;
                }
            }
            if(c==0) printf("No\n");
            else printf("Yes\n");
        }
    }

    return 0;
}
