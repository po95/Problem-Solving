#include<bits/stdc++.h>
using namespace std;

int call(int a,int b)
{
    int c;
    while(b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }

    return a;
}


int main()

{
    unsigned int t;

    scanf("%u",&t);
    int k=0;
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);

        int gcd,lcm;

        gcd=call(a,b);
        lcm=(a*b)/gcd;

        printf("%d %d %d\n",++k,lcm,gcd);
    }



    return 0;
}
