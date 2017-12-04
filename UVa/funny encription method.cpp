#include<bits/stdc++.h>
using namespace std;

int decimal_one(int n)
{
    int c=0;
    while(n!=0)
    {
        if(n%2==1) c++;
        n=n/2;
    }
    return c;
}
int hexa_one(int n)
{
    int i,j,k,c;
    int sum=0;
    for(i=1000,j=3; i>=1; i/=10,j--)
    {
        if(i<=n)
        {
            k=n/i;
            sum+=(k*(int)pow(16,j));
            n=n%i;
        }
    }
    c=decimal_one(sum);
    return c;
}


int main()
{
    int n;
    while(1==scanf("%d",&n))
    {
        while(n--)
        {
            int x;
            scanf("%d",&x);
            printf("%d %d\n",decimal_one(x),hexa_one(x));
        }
    }
    return 0;
}
