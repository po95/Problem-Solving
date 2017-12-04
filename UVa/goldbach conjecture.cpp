#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    if(n<2) return 0;
    if(n%2==0) return 0;
    int i;
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()

{
    int n,i;

    while(1==scanf("%d",&n) && n>=6)
    {
        if(n==0) break;
        int a,b;
        for(i=3; 2*i<=n; i+=2)
        {
            a=i;
            b=n-i;
            if(isprime(a)==1 && isprime(b)==1)
            {
                break;
            }
        }
        printf("%d = %d + %d\n",n,a,b);
    }

    return 0;
}
