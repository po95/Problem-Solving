
#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long m,n,a;

    while(3==scanf("%I64d%I64d%I64d",&n,&m,&a))
    {
        long long num;

        long long x,y;

        x=ceil((double)n/(double)a);
        y=ceil((double)m/(double)a);

        num=x*y;
        printf("%I64d\n",num);
    }


    return 0;
}
