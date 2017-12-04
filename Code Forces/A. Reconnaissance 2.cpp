#include<bits/stdc++.h>
#define INF 999999999
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);
    int first,m=INF,pre,p,q;
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);

        if(i==1)
        {
            first=x;
            pre=x;
            continue;

        }
        if(abs(pre-x)<m)
        {
            m=abs(pre-x);
            p=i-1;
            q=i;
        }
        if(i==n && (abs(x-first)<m))
        {
            p=n;
            q=1;
        }
        pre=x;
    }
    printf("%d %d\n",p,q);

    return 0;
}
