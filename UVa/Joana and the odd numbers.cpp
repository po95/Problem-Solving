#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long n;
    while(1==scanf("%lld",&n))
    {
        long long ans;
        n=(n/2)+1;
        ans=(n*n)*2-1;
        printf("%lld\n",ans+(ans-2)+(ans-4));

    }


    return 0;
}
