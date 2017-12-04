#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);
    int k=0;
    while(t--)
    {
        int m,n;
        scanf("%d%d",&n,&m);

        int c=0;
        long long sum=0;
        for(int i=1; i<=n; i+=m)
        {
            if(c==0)
            {
                sum-=((i*m)+(m-1));
                c=1;
            }
            else if(c==1)
            {
                sum+=((i*m)+(m-1));
                c=0;
            }
        }
        printf("Case %d: %lld\n",++k,sum);
    }


    return 0;
}
