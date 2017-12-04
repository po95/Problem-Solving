#include<bits/stdc++.h>
using namespace std;
int divisor(int n)
{
    int c=0;
    for(int i=1; i*i<=n; i++)
    {
        if(i*i==n) c++;
        else if(n%i==0)
        {
            c+=2;
        }
    }
    return c;
}

int main()

{
    int ara[1010],d[1010];
    int t,r;
    ara[1]=1;
    d[1]=1;
    for(int i=2; i<=1000; i++)
    {
        r=divisor(i);
        d[i]=r;
        ara[i]=i;
        if(r<d[i-1] || ((r==d[i-1])&&(ara[i-1]<i)))
        {
            for(int j=i; j>1; j--)
            {
                if(r<d[j-1] || ((r==d[j-1])&&(ara[j-1]<i)))
                {
                    swap(ara[j],ara[j-1]);
                    swap(d[j],d[j-1]);
                }
                else break;
            }
        }

    }
    while(1==scanf("%d",&t))
    {
        int k=0;
        while(t--)
        {
            int s;
            scanf("%d",&s);
            printf("Case %d: %d\n",++k,ara[s]);
        }
    }

    return 0;
}
