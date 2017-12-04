#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long ara[10020];
    long long i,j,k;

    long long x;
    i=1;
    while(1==scanf("%lld",&x))
    {
        if(i==1)
        {
            ara[i]=x;
            i++;
            printf("%lld\n",x);
            continue;
        }
        ara[i]=x;

        if(ara[i]<ara[i-1])
        {
            for(k=i; k>1; k--)
            {
                if(ara[k]<ara[k-1])
                {
                    swap(ara[k],ara[k-1]);
                }
                else break;
            }
        }
        long long c,m;
        if(i%2!=0)
        {
            c=(i/2)+1;
            printf("%lld\n",ara[c]);
        }
        else if(i%2==0)
        {
            c=(i/2);
            m=(ara[c]+ara[c+1])/2;
            printf("%lld\n",m);
        }

        i++;
    }


    return 0;
}
