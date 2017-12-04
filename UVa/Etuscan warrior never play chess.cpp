#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n;

    while(1==scanf("%u",&n))
    {
        while(n--)
        {

            double a;
            long long x;
            scanf("%lld",&x);
            a=(sqrt(1+(4*2*x))-1)/2.0;
            printf("%0.0lf\n",floor(a));
        }
    }

    return 0;
}
