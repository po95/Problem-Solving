#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    scanf("%d%d",&n,&m);

    int index,maxx=0;

    for(int i=1; i<=n; i++)
    {
        int x,r;
        scanf("%d",&x);

        r=x%m;

        if(r==0)
        {
            if(maxx<=(x/m))
            {
                index=i;
                maxx=x/m;
            }
        }
        else
        {
            if(maxx<=((x/m)+1))
            {
                index=i;
                maxx=(x/m)+1;
            }
        }
    }
    printf("%d\n",index);

    return 0;
}
