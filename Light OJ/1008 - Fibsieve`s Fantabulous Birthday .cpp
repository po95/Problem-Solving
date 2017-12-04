#include<bits/stdc++.h>
using namespace std;

int main()
{

    unsigned int t;

    scanf("%u",&t);
    int k=0;

    while(t--)
    {
        long long n,r;
        int x,y;

        scanf("%lld",&n);
        r=(long long)ceil(sqrt(n));
        long long mid;

        if(r%2==0)
        {
            mid=r*r-r+1;
            x=r;
            y=r;

            if(n>mid)
            {
                x=x-(n-mid);
            }
            else if(n<mid)
            {
                y=y-(mid-n);
            }


        }
        else
        {

            mid=r*r-r+1;
            x=r;
            y=r;

            if(n<mid)
            {
                x=x-(mid-n);
            }
            else if(n>mid)
            {
                y=y-(n-mid);
            }
        }

        printf("Case %d: %d %d\n",++k,y,x);
    }

    return 0;
}
