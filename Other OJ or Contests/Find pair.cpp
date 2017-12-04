#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,k;

    scanf("%d%d",&n,&k);

    int ara[100010];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    sort(ara,ara+n);

    int x,y;

    x=ceil((double)k/(double)n);

    y=k%n;

    if(y==0) y=n;

    printf("%d %d\n",ara[x-1],ara[y-1]);


    return 0;
}
