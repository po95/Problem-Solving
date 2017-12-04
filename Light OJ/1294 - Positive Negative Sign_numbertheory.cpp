#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);
    int k=0;
    while(t--)
    {
        long long n,m;
        scanf("%lld%lld",&n,&m);
        long long sum=0;
        long long p;
        p=(n/(2*m));
        sum=m*m*p;
        printf("Case %d: %lld\n",++k,sum);
    }


    return 0;
}
