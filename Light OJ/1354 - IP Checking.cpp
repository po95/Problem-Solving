#include<bits/stdc++.h>
using namespace std;
int binary(int n)
{
    int j=1;
    int sum=0;
    while(n!=0)
    {
        sum+=(j*(n%2));
        j*=10;
        n=n/2;
    }
    return sum;
}

int main()

{
    unsigned int t;
    scanf("%u",&t);

    int k=0;
    while(t--)
    {
        int d[5];
        char c1,c2,c3;
        scanf("%d%c%d%c%d%c%d",&d[1],&c1,&d[2],&c2,&d[3],&c3,&d[4]);
        int b[5];
        scanf("%d%c%d%c%d%c%d",&b[1],&c1,&b[2],&c2,&b[3],&c3,&b[4]);

        int c=1;
        for(int i=1; i<=4; i++)
        {
            if(binary(d[i])!=b[i]) c=0;
        }
        if(c==0) printf("Case %d: No\n",++k);
        else if(c==1) printf("Case %d: Yes\n",++k);


    }

    return 0;
}
