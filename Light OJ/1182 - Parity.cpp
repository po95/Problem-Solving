#include<bits/stdc++.h>
using namespace std;

int parity(int n)
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
    int t;
    while(1==scanf("%d",&t))
    {
        int k=0;
        int n,c;
        while(t--)
        {
            scanf("%d",&n);
            c=parity(n);
            if(c%2==1) printf("Case %d: odd\n",++k);
            else if(c%2==0) printf("Case %d: even\n",++k);
        }
    }

    return 0;
}
