#include<bits/stdc++.h>
using namespace std;

int binary_one(int n)
{
    int c=0;
    while(n!=0)
    {
        if(n%2==1) c++;

        n=n/2;
    }

    return c;
}

int main()

{
    unsigned int t;
    scanf("%u",&t);

    int k=0;

    while(t--)
    {
        int n;
        scanf("%d",&n);
        int sum=0;

        for(int i=1; i<=n; i++)
        {
            sum+=binary_one(i);
        }
        printf("%d\n",sum);
    }


    return 0;
}
