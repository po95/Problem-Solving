#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);

    int sum[10];

    sum[0]=0;

    for(int i=1; i<=7; i++)
    {
        int x;
        scanf("%d",&x);

        sum[i]=sum[i-1]+x;
    }
    int s;

    s=n%sum[7];

    if(s!=0) n=s;
    else if(s==0) n=sum[7];


    int i;

    for(i=1; i<=7; i++)
    {
        if(sum[i]>=n) break;
    }

    printf("%d\n",i);

    return 0;
}
