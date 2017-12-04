#include<bits/stdc++.h>
using namespace std;

int main()


{

    unsigned int t;
    scanf("%u",&t);

    while(t--)
    {
        long long n,k,m;
        scanf("%lld%lld%lld",&n,&k,&m);

        double time=((double)m/(double)n);
        int c=0;

        double r=pow(k,c+1);

        while(r<=time)
        {

            c++;
            r=pow(k,c+1);
        }

        printf("%d\n",c);
    }


    return 0;
}
