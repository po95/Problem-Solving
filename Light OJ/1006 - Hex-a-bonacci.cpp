#include<bits/stdc++.h>
using namespace std;
long long ara[10100];
long long a,b,c,d,e,f;
long long n;

long long func(long long n)
{
    if( n == 0 ) return a%10000007;
    if( n == 1 ) return b%10000007;
    if( n == 2 ) return c%10000007;
    if( n == 3 ) return d%10000007;
    if( n == 4 ) return e%10000007;
    if( n == 5 ) return f%10000007;
    if(ara[n]!=-1) return ara[n]%10000007;
    else
    {
        ara[n]= func(n-1) + func(n-2) + func(n-3) + func(n-4) + func(n-5) + func(n-6);
        return ara[n]%10000007;
    }

}

int main()
{
    unsigned int u;
    scanf("%u",&u);
    int i=0;
    while(u--)
    {
        memset(ara,-1,sizeof(ara));
        scanf("%lld%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f,&n);
         printf("Case %d: %lld\n",++i,func(n));
    }



    return 0;
}
