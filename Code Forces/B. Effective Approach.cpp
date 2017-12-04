#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ara[100010];
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        int p;
        scanf("%d",&p);
        ara[p]=i;
    }

    int m;

    scanf("%d",&m);

    long long vas=0,pet=0;
    for(int i=1; i<=m; i++)
    {
        int x;
        scanf("%d",&x);
        vas+=ara[x];
        pet+=(n-ara[x]+1);
    }

    //printf("")
    printf("%I64d %I64d\n",vas,pet);

    return 0;
}
