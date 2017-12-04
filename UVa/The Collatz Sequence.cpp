//accepted
#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long a,g,L,sum;

    int k=0;
    while(2==scanf("%lld%lld",&a,&L))
    {
        int count=1;
        g=a;

        if(a<0 && L<0) break;

        while(a!=1)
        {
            if(a%2==0) a=a/2;
            else a=(3*a+1);

           // count++;

            if(a>L) break;

            count++;
        }

        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",++k,g,L,count);
    }

    return 0;
}
