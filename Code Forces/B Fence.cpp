//accepted

#include<bits/stdc++.h>
#define INF 999999999
using namespace std;
int ara[150010];

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    int m=INF;
    int trace=1;
    int sum;
    ara[0]=0;

    int x;

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);

        ara[i]=ara[i-1]+x;

        if(i>=k)
        {
            sum=ara[i]-ara[i-k];

            if(m>sum)
            {
                m=sum;
                trace=(i-k+1);
            }
        }
        else continue;
    }

    printf("%d\n",trace);
    return 0;
}
