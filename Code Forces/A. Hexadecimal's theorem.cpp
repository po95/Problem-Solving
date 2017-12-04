#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ara[100];

    ara[0]=0;
    ara[1]=1;

    for(int i=2; i<47; i++)
    {
        ara[i]=ara[i-1]+ara[i-2];
    }

    long long n;

    scanf("%I64d",&n);

    int c=0;

    for(int i=0; i<47; i++)
    {
        if(ara[i]==n)
        {
            c=1;
            printf("0 0 %I64d\n",ara[i]);
            break;
        }
    }
    if(c==0)
    {
        printf("I'm too stupid to solve this problem\n");
    }

    return 0;
}
