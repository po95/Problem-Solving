#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;

    scanf("%I64d%I64d",&n,&k);

    long long odd;

    if(n%2==1) odd=n/2+1;
    else odd=n/2;

    if(k<=odd)
    {
        long long r=k*2-1;

        printf("%I64d\n",r);
    }
    else
    {
        k=k-odd;
        printf("%I64d\n",2*k);
    }

    return 0;
}
