#include<bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    int k=0;

    while(1==scanf("%lf",&N))
    {
        if(N==0) break;

        double n;

        N=8*N+9;

        n=sqrt(N);
        n=3.0+n;

        n=ceil(n/2.0);

        printf("Case %d: %0.0lf\n",++k,n);


    }


    return 0;
}
